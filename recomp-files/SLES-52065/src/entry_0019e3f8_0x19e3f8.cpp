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

// Function: entry_0019e3f8
// Address: 0x19e3f8 - 0x19e434
void entry_0019e3f8_0x19e3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e3f8_0x19e3f8");
#endif

    switch (ctx->pc) {
        case 0x19e41cu: goto label_19e41c;
        case 0x19e430u: goto label_19e430;
        default: break;
    }

    ctx->pc = 0x19e3f8u;

label_19e3f8:
    // 0x19e3f8: 0x8e030994  lw          $v1, 0x994($s0)
    ctx->pc = 0x19e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2452)));
label_19e3fc:
    // 0x19e3fc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_19e400:
    if (ctx->pc == 0x19E400u) {
        ctx->pc = 0x19E404u;
        goto label_19e404;
    }
    ctx->pc = 0x19E3FCu;
    {
        const bool branch_taken_0x19e3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e3fc) {
            ctx->pc = 0x19E434u;
            return;
        }
    }
    ctx->pc = 0x19E404u;
label_19e404:
    // 0x19e404: 0x8e04099c  lw          $a0, 0x99C($s0)
    ctx->pc = 0x19e404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2460)));
label_19e408:
    // 0x19e408: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e40c:
    // 0x19e40c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19e40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19e410:
    // 0x19e410: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19e410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19e414:
    // 0x19e414: 0x320f809  jalr        $t9
label_19e418:
    if (ctx->pc == 0x19E418u) {
        ctx->pc = 0x19E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E414u;
        // 0x19e418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E41Cu;
        goto label_19e41c;
    }
    ctx->pc = 0x19E414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E41Cu);
        ctx->pc = 0x19E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E414u;
        // 0x19e418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E414u, 0x19E41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E41Cu;
label_19e41c:
    // 0x19e41c: 0x8e04099c  lw          $a0, 0x99C($s0)
    ctx->pc = 0x19e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2460)));
label_19e420:
    // 0x19e420: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19e420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19e424:
    // 0x19e424: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x19e424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_19e428:
    // 0x19e428: 0x320f809  jalr        $t9
label_19e42c:
    if (ctx->pc == 0x19E42Cu) {
        ctx->pc = 0x19E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E428u;
        // 0x19e42c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E430u;
        goto label_19e430;
    }
    ctx->pc = 0x19E428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E430u);
        ctx->pc = 0x19E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E428u;
        // 0x19e42c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E428u, 0x19E430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E430u;
label_19e430:
    // 0x19e430: 0xae000994  sw          $zero, 0x994($s0)
    ctx->pc = 0x19e430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2452), GPR_U32(ctx, 0));
    ctx->pc = 0x19e434u;
}
