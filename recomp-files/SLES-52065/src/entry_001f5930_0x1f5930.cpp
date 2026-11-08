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

// Function: entry_001f5930
// Address: 0x1f5930 - 0x1f59a4
void entry_001f5930_0x1f5930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5930_0x1f5930");
#endif

    switch (ctx->pc) {
        case 0x1f5974u: goto label_1f5974;
        case 0x1f5994u: goto label_1f5994;
        default: break;
    }

    ctx->pc = 0x1f5930u;

    // 0x1f5930: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1f5930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f5934: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1f5934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f5938: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x1f5938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1f593c: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x1f593cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f5940: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1f5940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f5944: 0x267310d0  addiu       $s3, $s3, 0x10D0
    ctx->pc = 0x1f5944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4304));
    // 0x1f5948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f594c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1f594cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1f5950: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f5950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f5954: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x1f5954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1f5958: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1f5958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1f595c: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x1f595cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1f5960: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1f5960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1f5964: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1f5964u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f5968: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1f5968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x1f596c: 0xc07afc6  jal         func_1EBF18
    ctx->pc = 0x1F596Cu;
    SET_GPR_U32(ctx, 31, 0x1F5974u);
    ctx->pc = 0x1F5970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F596Cu;
    // 0x1f5970: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBF18u, 0x1F596Cu, 0x1F5974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5974u;
label_1f5974:
    // 0x1f5974: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1f5974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f5978: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1f5978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1f597c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1f597cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1f5980: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5984: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f5984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f5988: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f598c: 0xc07ae78  jal         func_1EB9E0
    ctx->pc = 0x1F598Cu;
    SET_GPR_U32(ctx, 31, 0x1F5994u);
    ctx->pc = 0x1F5990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F598Cu;
    // 0x1f5990: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9E0u, 0x1F598Cu, 0x1F5994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5994u;
label_1f5994:
    // 0x1f5994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f5994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5998: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5998u;
    {
        const bool branch_taken_0x1f5998 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5998u;
        // 0x1f599c: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5998) {
            ctx->pc = 0x1F59C0u;
            return;
        }
    }
    ctx->pc = 0x1F59A0u;
    // 0x1f59a0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x1f59a4u;
}
