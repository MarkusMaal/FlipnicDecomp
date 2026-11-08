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

// Function: entry_001a7354
// Address: 0x1a7354 - 0x1a73a0
void entry_001a7354_0x1a7354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7354_0x1a7354");
#endif

    switch (ctx->pc) {
        case 0x1a736cu: goto label_1a736c;
        case 0x1a7374u: goto label_1a7374;
        case 0x1a7388u: goto label_1a7388;
        default: break;
    }

    ctx->pc = 0x1a7354u;

    // 0x1a7354: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1a7354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a7358: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a7358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a735c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1a735cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1a7360: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7360u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a7364: 0xc062860  jal         func_18A180
    ctx->pc = 0x1A7364u;
    SET_GPR_U32(ctx, 31, 0x1A736Cu);
    ctx->pc = 0x1A7368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7364u;
    // 0x1a7368: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1A7364u, 0x1A736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A736Cu;
label_1a736c:
    // 0x1a736c: 0xc062114  jal         func_188450
    ctx->pc = 0x1A736Cu;
    SET_GPR_U32(ctx, 31, 0x1A7374u);
    ctx->pc = 0x1A7370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A736Cu;
    // 0x1a7370: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A736Cu, 0x1A7374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7374u;
label_1a7374:
    // 0x1a7374: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1a7374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a7378: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a7378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a737c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a737cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7380: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A7380u;
    SET_GPR_U32(ctx, 31, 0x1A7388u);
    ctx->pc = 0x1A7384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7380u;
    // 0x1a7384: 0x24a50728  addiu       $a1, $a1, 0x728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A7380u, 0x1A7388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7388u;
label_1a7388:
    // 0x1a7388: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1a7388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1a738c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7390: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7390u;
    {
        const bool branch_taken_0x1a7390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7390u;
        // 0x1a7394: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7390) {
            ctx->pc = 0x1A73A0u;
            return;
        }
    }
    ctx->pc = 0x1A7398u;
    // 0x1a7398: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7398u;
    {
        const bool branch_taken_0x1a7398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7398u;
        // 0x1a739c: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7398) {
            ctx->pc = 0x1A73A8u;
            return;
        }
    }
    ctx->pc = 0x1A73A0u;
}
