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

// Function: caseD_5
// Address: 0x1a6444 - 0x1a64b0
void caseD_5_0x1a6444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1a6444");
#endif

    switch (ctx->pc) {
        case 0x1a644cu: goto label_1a644c;
        case 0x1a6458u: goto label_1a6458;
        case 0x1a648cu: goto label_1a648c;
        default: break;
    }

    ctx->pc = 0x1a6444u;

    // 0x1a6444: 0xc062114  jal         func_188450
    ctx->pc = 0x1A6444u;
    SET_GPR_U32(ctx, 31, 0x1A644Cu);
    ctx->pc = 0x1A6448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6444u;
    // 0x1a6448: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A6444u, 0x1A644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A644Cu;
label_1a644c:
    // 0x1a644c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a644cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6450: 0xc062114  jal         func_188450
    ctx->pc = 0x1A6450u;
    SET_GPR_U32(ctx, 31, 0x1A6458u);
    ctx->pc = 0x1A6454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6450u;
    // 0x1a6454: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A6450u, 0x1A6458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6458u;
label_1a6458:
    // 0x1a6458: 0xffb20000  sd          $s2, 0x0($sp)
    ctx->pc = 0x1a6458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    // 0x1a645c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1a645cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1a6460: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1a6460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1a6464: 0x24632bf0  addiu       $v1, $v1, 0x2BF0
    ctx->pc = 0x1a6464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11248));
    // 0x1a6468: 0xde8200d0  ld          $v0, 0xD0($s4)
    ctx->pc = 0x1a6468u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x1a646c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1a646cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1a6470: 0xffb20018  sd          $s2, 0x18($sp)
    ctx->pc = 0x1a6470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 18));
    // 0x1a6474: 0x8e8200e0  lw          $v0, 0xE0($s4)
    ctx->pc = 0x1a6474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
    // 0x1a6478: 0x8e8400e8  lw          $a0, 0xE8($s4)
    ctx->pc = 0x1a6478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
    // 0x1a647c: 0xde8500c8  ld          $a1, 0xC8($s4)
    ctx->pc = 0x1a647cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1a6480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6484: 0xc081c20  jal         func_207080
    ctx->pc = 0x1A6484u;
    SET_GPR_U32(ctx, 31, 0x1A648Cu);
    ctx->pc = 0x1A6488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6484u;
    // 0x1a6488: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1A6484u, 0x1A648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A648Cu;
label_1a648c:
    // 0x1a648c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1a648cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1a6490: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a6490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6494: 0xde8800c8  ld          $t0, 0xC8($s4)
    ctx->pc = 0x1a6494u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1a6498: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1a6498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a649c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1a649cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a64a0: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1a64a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a64a4: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x1a64a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1a64a8: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A64A8u;
    SET_GPR_U32(ctx, 31, 0x1A64B0u);
    ctx->pc = 0x1A64ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A64A8u;
    // 0x1a64ac: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A64A8u, 0x1A64B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A64B0u;
}
