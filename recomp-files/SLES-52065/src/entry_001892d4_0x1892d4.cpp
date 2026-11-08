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

// Function: entry_001892d4
// Address: 0x1892d4 - 0x189320
void entry_001892d4_0x1892d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001892d4_0x1892d4");
#endif

    switch (ctx->pc) {
        case 0x1892ecu: goto label_1892ec;
        default: break;
    }

    ctx->pc = 0x1892d4u;

    // 0x1892d4: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x1892d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1892d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1892d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1892dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1892dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1892e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1892e4: 0xc062240  jal         func_188900
    ctx->pc = 0x1892E4u;
    SET_GPR_U32(ctx, 31, 0x1892ECu);
    ctx->pc = 0x1892E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892E4u;
    // 0x1892e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188900u, 0x1892E4u, 0x1892ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892ECu;
label_1892ec:
    // 0x1892ec: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x1892ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1892f0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1892F0u;
    {
        const bool branch_taken_0x1892f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1892F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892F0u;
        // 0x1892f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1892f0) {
            ctx->pc = 0x189338u;
            return;
        }
    }
    ctx->pc = 0x1892F8u;
    // 0x1892f8: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x1892f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x1892fc: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1892fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x189300: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x189300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189304: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189308: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x18930c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18930Cu;
    {
        const bool branch_taken_0x18930c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18930Cu;
        // 0x189310: 0x8e630058  lw          $v1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18930c) {
            ctx->pc = 0x189320u;
            return;
        }
    }
    ctx->pc = 0x189314u;
    // 0x189314: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x189314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x189318: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x18931c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x18931cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x189320u;
}
