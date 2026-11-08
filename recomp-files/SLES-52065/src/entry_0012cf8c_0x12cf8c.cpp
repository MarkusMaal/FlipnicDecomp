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

// Function: entry_0012cf8c
// Address: 0x12cf8c - 0x12cf9c
void entry_0012cf8c_0x12cf8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cf8c_0x12cf8c");
#endif

    switch (ctx->pc) {
        case 0x12cf98u: goto label_12cf98;
        default: break;
    }

    ctx->pc = 0x12cf8cu;

    // 0x12cf8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12cf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf90: 0xc04b65c  jal         func_12D970
    ctx->pc = 0x12CF90u;
    SET_GPR_U32(ctx, 31, 0x12CF98u);
    ctx->pc = 0x12CF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF90u;
    // 0x12cf94: 0x24a52f60  addiu       $a1, $a1, 0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D970u, 0x12CF90u, 0x12CF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF98u;
label_12cf98:
    // 0x12cf98: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x12cf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->pc = 0x12cf9cu;
}
