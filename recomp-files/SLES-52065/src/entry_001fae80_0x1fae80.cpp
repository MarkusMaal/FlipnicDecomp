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

// Function: entry_001fae80
// Address: 0x1fae80 - 0x1fae9c
void entry_001fae80_0x1fae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fae80_0x1fae80");
#endif

    ctx->pc = 0x1fae80u;

    // 0x1fae80: 0xe6e20004  swc1        $f2, 0x4($s7)
    ctx->pc = 0x1fae80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x1fae84: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x1fae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1fae88: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1FAE88u;
    {
        const bool branch_taken_0x1fae88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE88u;
        // 0x1fae8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae88) {
            ctx->pc = 0x1FAFB8u;
            return;
        }
    }
    ctx->pc = 0x1FAE90u;
    // 0x1fae90: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1fae90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1fae94: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1FAE94u;
    {
        const bool branch_taken_0x1fae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE94u;
        // 0x1fae98: 0xe6e00004  swc1        $f0, 0x4($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae94) {
            ctx->pc = 0x1FAFB8u;
            return;
        }
    }
    ctx->pc = 0x1FAE9Cu;
}
