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

// Function: entry_0017d3f4
// Address: 0x17d3f4 - 0x17d468
void entry_0017d3f4_0x17d3f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d3f4_0x17d3f4");
#endif

    switch (ctx->pc) {
        case 0x17d408u: goto label_17d408;
        case 0x17d424u: goto label_17d424;
        default: break;
    }

    ctx->pc = 0x17d3f4u;

    // 0x17d3f4: 0x8ea200b0  lw          $v0, 0xB0($s5)
    ctx->pc = 0x17d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x17d3f8: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x17d3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x17d3fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17d3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d400: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D400u;
    SET_GPR_U32(ctx, 31, 0x17D408u);
    ctx->pc = 0x17D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D400u;
    // 0x17d404: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D400u, 0x17D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D408u;
label_17d408:
    // 0x17d408: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x17d408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x17d40c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x17d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17d410: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x17d410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x17d414: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17d414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d418: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x17d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17d41c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D41Cu;
    SET_GPR_U32(ctx, 31, 0x17D424u);
    ctx->pc = 0x17D420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D41Cu;
    // 0x17d420: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D41Cu, 0x17D424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D424u;
label_17d424:
    // 0x17d424: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x17d424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x17d428: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x17d428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17d42c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x17d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x17d430: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17d430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17d434: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x17d434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17d438: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17d438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d43c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x17d43cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x17d440: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17d440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17d444: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x17d444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x17d448: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17d448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17d44c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x17d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x17d450: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x17d450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17d454: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17d454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d458: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x17d458u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x17d45c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x17d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x17d460: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17d460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17d464: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17d464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x17d468u;
}
