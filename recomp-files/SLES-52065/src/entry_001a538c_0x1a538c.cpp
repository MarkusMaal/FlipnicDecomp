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

// Function: entry_001a538c
// Address: 0x1a538c - 0x1a53b8
void entry_001a538c_0x1a538c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a538c_0x1a538c");
#endif

    switch (ctx->pc) {
        case 0x1a53b4u: goto label_1a53b4;
        default: break;
    }

    ctx->pc = 0x1a538cu;

    // 0x1a538c: 0x9262075c  lbu         $v0, 0x75C($s3)
    ctx->pc = 0x1a538cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1884)));
    // 0x1a5390: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5390u;
    {
        const bool branch_taken_0x1a5390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5390u;
        // 0x1a5394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5390) {
            ctx->pc = 0x1A53B8u;
            return;
        }
    }
    ctx->pc = 0x1A5398u;
    // 0x1a5398: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x1a5398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x1a539c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1a539cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1a53a0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a53a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a53a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a53a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a53a8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1a53a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1a53ac: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1A53ACu;
    SET_GPR_U32(ctx, 31, 0x1A53B4u);
    ctx->pc = 0x1A53B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A53ACu;
    // 0x1a53b0: 0x266407f0  addiu       $a0, $s3, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1A53ACu, 0x1A53B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53B4u;
label_1a53b4:
    // 0x1a53b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a53b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a53b8u;
}
