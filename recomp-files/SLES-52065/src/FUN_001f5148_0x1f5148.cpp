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

// Function: FUN_001f5148
// Address: 0x1f5148 - 0x1f5198
void FUN_001f5148_0x1f5148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f5148_0x1f5148");
#endif

    switch (ctx->pc) {
        case 0x1f5168u: goto label_1f5168;
        case 0x1f5178u: goto label_1f5178;
        default: break;
    }

    ctx->pc = 0x1f5148u;

    // 0x1f5148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f5148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f514c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f514cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f5150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5154: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f5154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5158: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f5158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f515c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f515cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5160: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x1F5160u;
    SET_GPR_U32(ctx, 31, 0x1F5168u);
    ctx->pc = 0x1F5164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5160u;
    // 0x1f5164: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x1F5160u, 0x1F5168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5168u;
label_1f5168:
    // 0x1f5168: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1f5168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f516c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f516cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5170: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x1F5170u;
    SET_GPR_U32(ctx, 31, 0x1F5178u);
    ctx->pc = 0x1F5174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5170u;
    // 0x1f5174: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x1F5170u, 0x1F5178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5178u;
label_1f5178:
    // 0x1f5178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f517c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1f517cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f5180: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f5180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5184: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f5184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5188: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f5188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f518c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f518cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5190: 0x807d3fe  j           func_1F4FF8
    ctx->pc = 0x1F5190u;
    ctx->pc = 0x1F5194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5190u;
    // 0x1f5194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    FUN_001f4ff8_0x1f4ff8(rdram, ctx, runtime); return;
    ctx->pc = 0x1F5198u;
}
