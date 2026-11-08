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

// Function: entry_001b51cc
// Address: 0x1b51cc - 0x1b5228
void entry_001b51cc_0x1b51cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b51cc_0x1b51cc");
#endif

    switch (ctx->pc) {
        case 0x1b51e4u: goto label_1b51e4;
        case 0x1b51f0u: goto label_1b51f0;
        case 0x1b51f8u: goto label_1b51f8;
        case 0x1b5204u: goto label_1b5204;
        case 0x1b5214u: goto label_1b5214;
        case 0x1b5220u: goto label_1b5220;
        default: break;
    }

    ctx->pc = 0x1b51ccu;

    // 0x1b51cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b51ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b51d0: 0x9022ecd8  lbu         $v0, -0x1328($at)
    ctx->pc = 0x1b51d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x36ECD8u));
    // 0x1b51d4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B51D4u;
    {
        const bool branch_taken_0x1b51d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b51d4) {
            ctx->pc = 0x1B5254u;
            return;
        }
    }
    ctx->pc = 0x1B51DCu;
    // 0x1b51dc: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B51DCu;
    SET_GPR_U32(ctx, 31, 0x1B51E4u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B51DCu, 0x1B51E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51E4u;
label_1b51e4:
    // 0x1b51e4: 0x24450104  addiu       $a1, $v0, 0x104
    ctx->pc = 0x1b51e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x1b51e8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1B51E8u;
    SET_GPR_U32(ctx, 31, 0x1B51F0u);
    ctx->pc = 0x1B51ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B51E8u;
    // 0x1b51ec: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1B51E8u, 0x1B51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51F0u;
label_1b51f0:
    // 0x1b51f0: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B51F0u;
    SET_GPR_U32(ctx, 31, 0x1B51F8u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B51F0u, 0x1B51F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51F8u;
label_1b51f8:
    // 0x1b51f8: 0x24450264  addiu       $a1, $v0, 0x264
    ctx->pc = 0x1b51f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 612));
    // 0x1b51fc: 0xc080664  jal         func_201990
    ctx->pc = 0x1B51FCu;
    SET_GPR_U32(ctx, 31, 0x1B5204u);
    ctx->pc = 0x1B5200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B51FCu;
    // 0x1b5200: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1B51FCu, 0x1B5204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5204u;
label_1b5204:
    // 0x1b5204: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b5208: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b5208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b520c: 0xc046b28  jal         func_11ACA0
    ctx->pc = 0x1B520Cu;
    SET_GPR_U32(ctx, 31, 0x1B5214u);
    ctx->pc = 0x1B5210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B520Cu;
    // 0x1b5210: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACA0u, 0x1B520Cu, 0x1B5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5214u;
label_1b5214:
    // 0x1b5214: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b5218: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B5218u;
    SET_GPR_U32(ctx, 31, 0x1B5220u);
    ctx->pc = 0x1B521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5218u;
    // 0x1b521c: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B5218u, 0x1B5220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5220u;
label_1b5220:
    // 0x1b5220: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5220u;
    {
        const bool branch_taken_0x1b5220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5220) {
            ctx->pc = 0x1B5244u;
            return;
        }
    }
    ctx->pc = 0x1B5228u;
}
