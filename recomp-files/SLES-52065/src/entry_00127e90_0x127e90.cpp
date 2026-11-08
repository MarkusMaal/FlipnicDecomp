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

// Function: entry_00127e90
// Address: 0x127e90 - 0x127ed4
void entry_00127e90_0x127e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127e90_0x127e90");
#endif

    switch (ctx->pc) {
        case 0x127ea4u: goto label_127ea4;
        case 0x127eb8u: goto label_127eb8;
        case 0x127eccu: goto label_127ecc;
        default: break;
    }

    ctx->pc = 0x127e90u;

label_127e90:
    // 0x127e90: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x127e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_127e94:
    // 0x127e94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127e94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127e98:
    // 0x127e98: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x127e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_127e9c:
    // 0x127e9c: 0x320f809  jalr        $t9
label_127ea0:
    if (ctx->pc == 0x127EA0u) {
        ctx->pc = 0x127EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E9Cu;
        // 0x127ea0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EA4u;
        goto label_127ea4;
    }
    ctx->pc = 0x127E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127EA4u);
        ctx->pc = 0x127EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E9Cu;
        // 0x127ea0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127E9Cu, 0x127EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127EA4u;
label_127ea4:
    // 0x127ea4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x127ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_127ea8:
    // 0x127ea8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127eac:
    // 0x127eac: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x127eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_127eb0:
    // 0x127eb0: 0x320f809  jalr        $t9
label_127eb4:
    if (ctx->pc == 0x127EB4u) {
        ctx->pc = 0x127EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EB0u;
        // 0x127eb4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EB8u;
        goto label_127eb8;
    }
    ctx->pc = 0x127EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127EB8u);
        ctx->pc = 0x127EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EB0u;
        // 0x127eb4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127EB0u, 0x127EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127EB8u;
label_127eb8:
    // 0x127eb8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x127eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_127ebc:
    // 0x127ebc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127ec0:
    // 0x127ec0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x127ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_127ec4:
    // 0x127ec4: 0x320f809  jalr        $t9
label_127ec8:
    if (ctx->pc == 0x127EC8u) {
        ctx->pc = 0x127EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EC4u;
        // 0x127ec8: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x127ECCu;
        goto label_127ecc;
    }
    ctx->pc = 0x127EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127ECCu);
        ctx->pc = 0x127EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EC4u;
        // 0x127ec8: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127EC4u, 0x127ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127ECCu;
label_127ecc:
    // 0x127ecc: 0x10000034  b           . + 4 + (0x34 << 2)
label_127ed0:
    if (ctx->pc == 0x127ED0u) {
        ctx->pc = 0x127ED4u;
        goto label_fallthrough_0x127ecc;
    }
    ctx->pc = 0x127ECCu;
    {
        const bool branch_taken_0x127ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127ecc) {
            ctx->pc = 0x127FA0u;
            return;
        }
    }
label_fallthrough_0x127ecc:
    ctx->pc = 0x127ED4u;
}
