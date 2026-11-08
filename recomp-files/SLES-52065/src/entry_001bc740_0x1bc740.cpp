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

// Function: entry_001bc740
// Address: 0x1bc740 - 0x1bc790
void entry_001bc740_0x1bc740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc740_0x1bc740");
#endif

    switch (ctx->pc) {
        case 0x1bc754u: goto label_1bc754;
        case 0x1bc768u: goto label_1bc768;
        case 0x1bc77cu: goto label_1bc77c;
        case 0x1bc788u: goto label_1bc788;
        default: break;
    }

    ctx->pc = 0x1bc740u;

    // 0x1bc740: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc744: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bc744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bc748: 0x24a53050  addiu       $a1, $a1, 0x3050
    ctx->pc = 0x1bc748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12368));
    // 0x1bc74c: 0xc06f55c  jal         func_1BD570
    ctx->pc = 0x1BC74Cu;
    SET_GPR_U32(ctx, 31, 0x1BC754u);
    ctx->pc = 0x1BC750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC74Cu;
    // 0x1bc750: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD570u, 0x1BC74Cu, 0x1BC754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC754u;
label_1bc754:
    // 0x1bc754: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc758: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x1bc758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x1bc75c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1bc75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1bc760: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1BC760u;
    SET_GPR_U32(ctx, 31, 0x1BC768u);
    ctx->pc = 0x1BC764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC760u;
    // 0x1bc764: 0xac400080  sw          $zero, 0x80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1BC760u, 0x1BC768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC768u;
label_1bc768:
    // 0x1bc768: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bc768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc76c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bc76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bc770: 0x24a511b0  addiu       $a1, $a1, 0x11B0
    ctx->pc = 0x1bc770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4528));
    // 0x1bc774: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1BC774u;
    SET_GPR_U32(ctx, 31, 0x1BC77Cu);
    ctx->pc = 0x1BC778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC774u;
    // 0x1bc778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1BC774u, 0x1BC77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC77Cu;
label_1bc77c:
    // 0x1bc77c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bc77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc780: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1BC780u;
    SET_GPR_U32(ctx, 31, 0x1BC788u);
    ctx->pc = 0x1BC784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC780u;
    // 0x1bc784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1BC780u, 0x1BC788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC788u;
label_1bc788:
    // 0x1bc788: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC788u;
    {
        const bool branch_taken_0x1bc788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc788) {
            ctx->pc = 0x1BC7ACu;
            return;
        }
    }
    ctx->pc = 0x1BC790u;
}
