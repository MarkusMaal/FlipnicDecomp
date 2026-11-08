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

// Function: entry_00168a28
// Address: 0x168a28 - 0x168a60
void entry_00168a28_0x168a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168a28_0x168a28");
#endif

    switch (ctx->pc) {
        case 0x168a34u: goto label_168a34;
        case 0x168a4cu: goto label_168a4c;
        case 0x168a58u: goto label_168a58;
        default: break;
    }

    ctx->pc = 0x168a28u;

    // 0x168a28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x168a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x168a2c: 0xc056194  jal         func_158650
    ctx->pc = 0x168A2Cu;
    SET_GPR_U32(ctx, 31, 0x168A34u);
    ctx->pc = 0x168A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A2Cu;
    // 0x168a30: 0x8e240220  lw          $a0, 0x220($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x168A2Cu, 0x168A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A34u;
label_168a34:
    // 0x168a34: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x168a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x168a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x168a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168a40: 0xa44001e8  sh          $zero, 0x1E8($v0)
    ctx->pc = 0x168a40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 488), (uint16_t)GPR_U32(ctx, 0));
    // 0x168a44: 0xc042570  jal         func_1095C0
    ctx->pc = 0x168A44u;
    SET_GPR_U32(ctx, 31, 0x168A4Cu);
    ctx->pc = 0x168A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A44u;
    // 0x168a48: 0xae200220  sw          $zero, 0x220($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x168A44u, 0x168A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A4Cu;
label_168a4c:
    // 0x168a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a50: 0xc042118  jal         func_108460
    ctx->pc = 0x168A50u;
    SET_GPR_U32(ctx, 31, 0x168A58u);
    ctx->pc = 0x168A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A50u;
    // 0x168a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x168A50u, 0x168A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A58u;
label_168a58:
    // 0x168a58: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x168A58u;
    {
        const bool branch_taken_0x168a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A58u;
        // 0x168a5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a58) {
            ctx->pc = 0x168AACu;
            return;
        }
    }
    ctx->pc = 0x168A60u;
}
