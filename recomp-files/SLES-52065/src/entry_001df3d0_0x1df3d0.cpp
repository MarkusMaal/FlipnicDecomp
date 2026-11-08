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

// Function: entry_001df3d0
// Address: 0x1df3d0 - 0x1df420
void entry_001df3d0_0x1df3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df3d0_0x1df3d0");
#endif

    switch (ctx->pc) {
        case 0x1df3f4u: goto label_1df3f4;
        case 0x1df3fcu: goto label_1df3fc;
        case 0x1df408u: goto label_1df408;
        default: break;
    }

    ctx->pc = 0x1df3d0u;

    // 0x1df3d0: 0x340280bc  ori         $v0, $zero, 0x80BC
    ctx->pc = 0x1df3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32956);
    // 0x1df3d4: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x1df3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x1df3d8: 0x26b39f00  addiu       $s3, $s5, -0x6100
    ctx->pc = 0x1df3d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942464));
    // 0x1df3dc: 0x2538821  addu        $s1, $s2, $s3
    ctx->pc = 0x1df3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1df3e0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1df3e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1df3e4: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1df3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1df3e8: 0xde250038  ld          $a1, 0x38($s1)
    ctx->pc = 0x1df3e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1df3ec: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1DF3ECu;
    SET_GPR_U32(ctx, 31, 0x1DF3F4u);
    ctx->pc = 0x1DF3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3ECu;
    // 0x1df3f0: 0xfe220030  sd          $v0, 0x30($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1DF3ECu, 0x1DF3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3F4u;
label_1df3f4:
    // 0x1df3f4: 0xc074c4c  jal         func_1D3130
    ctx->pc = 0x1DF3F4u;
    SET_GPR_U32(ctx, 31, 0x1DF3FCu);
    ctx->pc = 0x1DF3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3F4u;
    // 0x1df3f8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3130u, 0x1DF3F4u, 0x1DF3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3FCu;
label_1df3fc:
    // 0x1df3fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1df3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df400: 0xc08218c  jal         func_208630
    ctx->pc = 0x1DF400u;
    SET_GPR_U32(ctx, 31, 0x1DF408u);
    ctx->pc = 0x1DF404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF400u;
    // 0x1df404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1DF400u, 0x1DF408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF408u;
label_1df408:
    // 0x1df408: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF408u;
    {
        const bool branch_taken_0x1df408 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1df408) {
            ctx->pc = 0x1DF420u;
            return;
        }
    }
    ctx->pc = 0x1DF410u;
    // 0x1df410: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1df410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1df414: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1df414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1df418: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DF418u;
    SET_GPR_U32(ctx, 31, 0x1DF420u);
    ctx->pc = 0x1DF41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF418u;
    // 0x1df41c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DF418u, 0x1DF420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF420u;
}
