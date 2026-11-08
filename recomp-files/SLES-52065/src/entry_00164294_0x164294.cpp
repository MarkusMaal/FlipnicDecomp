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

// Function: entry_00164294
// Address: 0x164294 - 0x1642a8
void entry_00164294_0x164294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164294_0x164294");
#endif

    ctx->pc = 0x164294u;

    // 0x164294: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164294u;
    {
        const bool branch_taken_0x164294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x164298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164294u;
        // 0x164298: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164294) {
            ctx->pc = 0x1642A8u;
            return;
        }
    }
    ctx->pc = 0x16429Cu;
    // 0x16429c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1642a0: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1642A0u;
    {
        const bool branch_taken_0x1642a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1642a0) {
            ctx->pc = 0x1642CCu;
            return;
        }
    }
    ctx->pc = 0x1642A8u;
}
