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

// Function: entry_00169be4
// Address: 0x169be4 - 0x169c08
void entry_00169be4_0x169be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169be4_0x169be4");
#endif

    switch (ctx->pc) {
        case 0x169c04u: goto label_169c04;
        default: break;
    }

    ctx->pc = 0x169be4u;

    // 0x169be4: 0x92020222  lbu         $v0, 0x222($s0)
    ctx->pc = 0x169be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x169be8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x169BE8u;
    {
        const bool branch_taken_0x169be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BE8u;
        // 0x169bec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169be8) {
            ctx->pc = 0x169C08u;
            return;
        }
    }
    ctx->pc = 0x169BF0u;
    // 0x169bf0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x169bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169bf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x169bfc: 0xc0425a4  jal         func_109690
    ctx->pc = 0x169BFCu;
    SET_GPR_U32(ctx, 31, 0x169C04u);
    ctx->pc = 0x169C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169BFCu;
    // 0x169c00: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169BFCu, 0x169C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169C04u;
label_169c04:
    // 0x169c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x169c08u;
}
