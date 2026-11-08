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

// Function: entry_00117530
// Address: 0x117530 - 0x117590
void entry_00117530_0x117530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117530_0x117530");
#endif

    ctx->pc = 0x117530u;

label_117530:
    // 0x117530: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x117530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x117534: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x117534u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x117538: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x117538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x11753c: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x11753cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x117540: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x117540u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x117544: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x117544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x117548: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x117548u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x11754c: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x11754cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x117550: 0xa0e30004  sb          $v1, 0x4($a3)
    ctx->pc = 0x117550u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x117554: 0x24c20005  addiu       $v0, $a2, 0x5
    ctx->pc = 0x117554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x117558: 0xa0e20005  sb          $v0, 0x5($a3)
    ctx->pc = 0x117558u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x11755c: 0x24c30006  addiu       $v1, $a2, 0x6
    ctx->pc = 0x11755cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x117560: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x117560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x117564: 0xa0e30006  sb          $v1, 0x6($a3)
    ctx->pc = 0x117564u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x117568: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x117568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x11756c: 0xa0e20007  sb          $v0, 0x7($a3)
    ctx->pc = 0x11756cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x117570: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x117570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x117574: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x117574u;
    {
        const bool branch_taken_0x117574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117574u;
        // 0x117578: 0xa63821  addu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117574) {
            ctx->pc = 0x117530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117530;
        }
    }
    ctx->pc = 0x11757Cu;
    // 0x11757c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117580: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x117580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117584: 0x3e00008  jr          $ra
    ctx->pc = 0x117584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117584u;
        // 0x117588: 0xa3838488  sb          $v1, -0x7B78($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935688), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11758Cu;
    // 0x11758c: 0x0  nop
    ctx->pc = 0x11758cu;
    // NOP
    ctx->pc = 0x117590u;
}
