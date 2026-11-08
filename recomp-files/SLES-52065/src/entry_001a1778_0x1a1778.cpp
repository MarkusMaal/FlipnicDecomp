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

// Function: entry_001a1778
// Address: 0x1a1778 - 0x1a17bc
void entry_001a1778_0x1a1778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1778_0x1a1778");
#endif

    switch (ctx->pc) {
        case 0x1a1788u: goto label_1a1788;
        case 0x1a17acu: goto label_1a17ac;
        default: break;
    }

    ctx->pc = 0x1a1778u;

    // 0x1a1778: 0x8e82069c  lw          $v0, 0x69C($s4)
    ctx->pc = 0x1a1778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
    // 0x1a177c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a177cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1780: 0xc068358  jal         func_1A0D60
    ctx->pc = 0x1A1780u;
    SET_GPR_U32(ctx, 31, 0x1A1788u);
    ctx->pc = 0x1A1784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1780u;
    // 0x1a1784: 0x22883  sra         $a1, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D60u, 0x1A1780u, 0x1A1788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1788u;
label_1a1788:
    // 0x1a1788: 0x8e83069c  lw          $v1, 0x69C($s4)
    ctx->pc = 0x1a1788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
    // 0x1a178c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1790: 0xae83069c  sw          $v1, 0x69C($s4)
    ctx->pc = 0x1a1790u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1692), GPR_U32(ctx, 3));
    // 0x1a1794: 0x8e83069c  lw          $v1, 0x69C($s4)
    ctx->pc = 0x1a1794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
    // 0x1a1798: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1a1798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1a179c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A179Cu;
    {
        const bool branch_taken_0x1a179c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a179c) {
            ctx->pc = 0x1A17BCu;
            return;
        }
    }
    ctx->pc = 0x1A17A4u;
    // 0x1a17a4: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A17A4u;
    SET_GPR_U32(ctx, 31, 0x1A17ACu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A17A4u, 0x1A17ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17ACu;
label_1a17ac:
    // 0x1a17ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a17acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a17b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a17b4: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A17B4u;
    SET_GPR_U32(ctx, 31, 0x1A17BCu);
    ctx->pc = 0x1A17B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A17B4u;
    // 0x1a17b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A17B4u, 0x1A17BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17BCu;
}
