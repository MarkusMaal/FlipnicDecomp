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

// Function: entry_0019ffd4
// Address: 0x19ffd4 - 0x1a0028
void entry_0019ffd4_0x19ffd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ffd4_0x19ffd4");
#endif

    switch (ctx->pc) {
        case 0x19fff8u: goto label_19fff8;
        case 0x1a0020u: goto label_1a0020;
        default: break;
    }

    ctx->pc = 0x19ffd4u;

label_19ffd4:
    // 0x19ffd4: 0x8d270030  lw          $a3, 0x30($t1)
    ctx->pc = 0x19ffd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_19ffd8:
    // 0x19ffd8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19ffdc:
    // 0x19ffdc: 0x10e3002a  beq         $a3, $v1, . + 4 + (0x2A << 2)
label_19ffe0:
    if (ctx->pc == 0x19FFE0u) {
        ctx->pc = 0x19FFE4u;
        goto label_19ffe4;
    }
    ctx->pc = 0x19FFDCu;
    {
        const bool branch_taken_0x19ffdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ffdc) {
            ctx->pc = 0x1A0088u;
            return;
        }
    }
    ctx->pc = 0x19FFE4u;
label_19ffe4:
    // 0x19ffe4: 0x8d280034  lw          $t0, 0x34($t1)
    ctx->pc = 0x19ffe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_19ffe8:
    // 0x19ffe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19ffe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ffec:
    // 0x19ffec: 0x8d290038  lw          $t1, 0x38($t1)
    ctx->pc = 0x19ffecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
label_19fff0:
    // 0x19fff0: 0xc064d84  jal         func_193610
label_19fff4:
    if (ctx->pc == 0x19FFF4u) {
        ctx->pc = 0x19FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFF0u;
        // 0x19fff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FFF8u;
        goto label_19fff8;
    }
    ctx->pc = 0x19FFF0u;
    SET_GPR_U32(ctx, 31, 0x19FFF8u);
    ctx->pc = 0x19FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFF0u;
    // 0x19fff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x19FFF0u, 0x19FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFF8u;
label_19fff8:
    // 0x19fff8: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x19fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_19fffc:
    // 0x19fffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a0000:
    // 0x1a0000: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1a0000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a0004:
    // 0x1a0004: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_1a0008:
    if (ctx->pc == 0x1A0008u) {
        ctx->pc = 0x1A000Cu;
        goto label_1a000c;
    }
    ctx->pc = 0x1A0004u;
    {
        const bool branch_taken_0x1a0004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0004) {
            ctx->pc = 0x1A0088u;
            return;
        }
    }
    ctx->pc = 0x1A000Cu;
label_1a000c:
    // 0x1a000c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a000cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a0010:
    // 0x1a0010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0014:
    // 0x1a0014: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1a0014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1a0018:
    // 0x1a0018: 0x320f809  jalr        $t9
label_1a001c:
    if (ctx->pc == 0x1A001Cu) {
        ctx->pc = 0x1A001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0018u;
        // 0x1a001c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0020u;
        goto label_1a0020;
    }
    ctx->pc = 0x1A0018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0020u);
        ctx->pc = 0x1A001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0018u;
        // 0x1a001c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0018u, 0x1A0020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0020u;
label_1a0020:
    // 0x1a0020: 0x10000019  b           . + 4 + (0x19 << 2)
label_1a0024:
    if (ctx->pc == 0x1A0024u) {
        ctx->pc = 0x1A0028u;
        goto label_fallthrough_0x1a0020;
    }
    ctx->pc = 0x1A0020u;
    {
        const bool branch_taken_0x1a0020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0020) {
            ctx->pc = 0x1A0088u;
            return;
        }
    }
label_fallthrough_0x1a0020:
    ctx->pc = 0x1A0028u;
}
