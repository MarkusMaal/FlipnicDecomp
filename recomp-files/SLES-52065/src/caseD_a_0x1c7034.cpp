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

// Function: caseD_a
// Address: 0x1c7034 - 0x1c7078
void caseD_a_0x1c7034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1c7034");
#endif

    switch (ctx->pc) {
        case 0x1c7040u: goto label_1c7040;
        case 0x1c704cu: goto label_1c704c;
        default: break;
    }

    ctx->pc = 0x1c7034u;

    // 0x1c7034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7038: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7038u;
    SET_GPR_U32(ctx, 31, 0x1C7040u);
    ctx->pc = 0x1C703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7038u;
    // 0x1c703c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7038u, 0x1C7040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7040u;
label_1c7040:
    // 0x1c7040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7044: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7044u;
    SET_GPR_U32(ctx, 31, 0x1C704Cu);
    ctx->pc = 0x1C7048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7044u;
    // 0x1c7048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7044u, 0x1C704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C704Cu;
label_1c704c:
    // 0x1c704c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c704cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7050: 0x8c22f888  lw          $v0, -0x778($at)
    ctx->pc = 0x1c7050u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F888u));
    // 0x1c7054: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c7054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c7058: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c705c: 0xac22f888  sw          $v0, -0x778($at)
    ctx->pc = 0x1c705cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F888u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F888u, _value); } while (0);
    // 0x1c7060: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7064: 0x8c22f888  lw          $v0, -0x778($at)
    ctx->pc = 0x1c7064u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F888u));
    // 0x1c7068: 0x144001c6  bnez        $v0, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x1C7068u;
    {
        const bool branch_taken_0x1c7068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7068u;
        // 0x1c706c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7068) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7070u;
    // 0x1c7070: 0x100001c4  b           . + 4 + (0x1C4 << 2)
    ctx->pc = 0x1C7070u;
    {
        const bool branch_taken_0x1c7070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7070u;
        // 0x1c7074: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7070) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7078u;
}
