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

// Function: entry_00141d08
// Address: 0x141d08 - 0x141d34
void entry_00141d08_0x141d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141d08_0x141d08");
#endif

    ctx->pc = 0x141d08u;

    // 0x141d08: 0x92a30029  lbu         $v1, 0x29($s5)
    ctx->pc = 0x141d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 41)));
    // 0x141d0c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x141D0Cu;
    {
        const bool branch_taken_0x141d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x141D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141D0Cu;
        // 0x141d10: 0x26b2003c  addiu       $s2, $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141d0c) {
            ctx->pc = 0x141D74u;
            return;
        }
    }
    ctx->pc = 0x141D14u;
    // 0x141d14: 0x92a40028  lbu         $a0, 0x28($s5)
    ctx->pc = 0x141d14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x141d18: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x141d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x141d1c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x141d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x141d20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x141d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x141d24: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x141d24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141d28: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x141d28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x141d2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x141D2Cu;
    {
        const bool branch_taken_0x141d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141D2Cu;
        // 0x141d30: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141d2c) {
            ctx->pc = 0x141D60u;
            return;
        }
    }
    ctx->pc = 0x141D34u;
}
