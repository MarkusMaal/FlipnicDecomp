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

// Function: caseD_37
// Address: 0x1c42c0 - 0x1c431c
void caseD_37_0x1c42c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_37_0x1c42c0");
#endif

    switch (ctx->pc) {
        case 0x1c42ccu: goto label_1c42cc;
        case 0x1c42d8u: goto label_1c42d8;
        case 0x1c42e4u: goto label_1c42e4;
        case 0x1c42ecu: goto label_1c42ec;
        case 0x1c4310u: goto label_1c4310;
        default: break;
    }

    ctx->pc = 0x1c42c0u;

    // 0x1c42c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c42c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c42c4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C42C4u;
    SET_GPR_U32(ctx, 31, 0x1C42CCu);
    ctx->pc = 0x1C42C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C42C4u;
    // 0x1c42c8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C42C4u, 0x1C42CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42CCu;
label_1c42cc:
    // 0x1c42cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c42ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c42d0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C42D0u;
    SET_GPR_U32(ctx, 31, 0x1C42D8u);
    ctx->pc = 0x1C42D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C42D0u;
    // 0x1c42d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C42D0u, 0x1C42D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42D8u;
label_1c42d8:
    // 0x1c42d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c42d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c42dc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C42DCu;
    SET_GPR_U32(ctx, 31, 0x1C42E4u);
    ctx->pc = 0x1C42E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C42DCu;
    // 0x1c42e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C42DCu, 0x1C42E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42E4u;
label_1c42e4:
    // 0x1c42e4: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1C42E4u;
    SET_GPR_U32(ctx, 31, 0x1C42ECu);
    ctx->pc = 0x1C42E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C42E4u;
    // 0x1c42e8: 0x24042780  addiu       $a0, $zero, 0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1C42E4u, 0x1C42ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42ECu;
label_1c42ec:
    // 0x1c42ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c42ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c42f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c42f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c42f4: 0xac22f5e0  sw          $v0, -0xA20($at)
    ctx->pc = 0x1c42f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5E0u, _value); } while (0);
    // 0x1c42f8: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c42fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c42fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4300: 0x24a51c80  addiu       $a1, $a1, 0x1C80
    ctx->pc = 0x1c4300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7296));
    // 0x1c4304: 0x8c26f5e0  lw          $a2, -0xA20($at)
    ctx->pc = 0x1c4304u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F5E0u));
    // 0x1c4308: 0xc074a3c  jal         func_1D28F0
    ctx->pc = 0x1C4308u;
    SET_GPR_U32(ctx, 31, 0x1C4310u);
    ctx->pc = 0x1C430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4308u;
    // 0x1c430c: 0x24072780  addiu       $a3, $zero, 0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D28F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D28F0u, 0x1C4308u, 0x1C4310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4310u;
label_1c4310:
    // 0x1c4310: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1c4310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1c4314: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1C4314u;
    {
        const bool branch_taken_0x1c4314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4314u;
        // 0x1c4318: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4314) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C431Cu;
}
