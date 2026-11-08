#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0013d260
// Address: 0x13d260 - 0x13d298
void entry_0013d260_0x13d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d260_0x13d260");
#endif

    ctx->pc = 0x13d260u;

    // 0x13d260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d264: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13d264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13d268: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13d26c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d270: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d274: 0x9082018a  lbu         $v0, 0x18A($a0)
    ctx->pc = 0x13d274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 394)));
    // 0x13d278: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13D278u;
    {
        const bool branch_taken_0x13d278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D278u;
        // 0x13d27c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d278) {
            ctx->pc = 0x13D2C0u;
            return;
        }
    }
    ctx->pc = 0x13D280u;
    // 0x13d280: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x13d280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x13d284: 0x8c910118  lw          $s1, 0x118($a0)
    ctx->pc = 0x13d284u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x13d288: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13d288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13d28c: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x13d28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13d290: 0x12300009  beq         $s1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13D290u;
    {
        const bool branch_taken_0x13d290 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x13d290) {
            ctx->pc = 0x13D2B8u;
            return;
        }
    }
    ctx->pc = 0x13D298u;
}
