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

// Function: entry_001e0168
// Address: 0x1e0168 - 0x1e01d4
void entry_001e0168_0x1e0168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0168_0x1e0168");
#endif

    switch (ctx->pc) {
        case 0x1e0170u: goto label_1e0170;
        case 0x1e0184u: goto label_1e0184;
        case 0x1e0190u: goto label_1e0190;
        case 0x1e01a8u: goto label_1e01a8;
        case 0x1e01b4u: goto label_1e01b4;
        default: break;
    }

    ctx->pc = 0x1e0168u;

    // 0x1e0168: 0xc080664  jal         func_201990
    ctx->pc = 0x1E0168u;
    SET_GPR_U32(ctx, 31, 0x1E0170u);
    ctx->pc = 0x1E016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0168u;
    // 0x1e016c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1E0168u, 0x1E0170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0170u;
label_1e0170:
    // 0x1e0170: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e0170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e0174: 0xde260078  ld          $a2, 0x78($s1)
    ctx->pc = 0x1e0174u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1e0178: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e017c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1E017Cu;
    SET_GPR_U32(ctx, 31, 0x1E0184u);
    ctx->pc = 0x1E0180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E017Cu;
    // 0x1e0180: 0x24a538e8  addiu       $a1, $a1, 0x38E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1E017Cu, 0x1E0184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0184u;
label_1e0184:
    // 0x1e0184: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e0184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0188: 0xc080664  jal         func_201990
    ctx->pc = 0x1E0188u;
    SET_GPR_U32(ctx, 31, 0x1E0190u);
    ctx->pc = 0x1E018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0188u;
    // 0x1e018c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1E0188u, 0x1E0190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0190u;
label_1e0190:
    // 0x1e0190: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e0190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e0194: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x1e0194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e0198: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e019c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1e019cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01a0: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1E01A0u;
    SET_GPR_U32(ctx, 31, 0x1E01A8u);
    ctx->pc = 0x1E01A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01A0u;
    // 0x1e01a4: 0x24a53908  addiu       $a1, $a1, 0x3908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1E01A0u, 0x1E01A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01A8u;
label_1e01a8:
    // 0x1e01a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e01a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01ac: 0xc080664  jal         func_201990
    ctx->pc = 0x1E01ACu;
    SET_GPR_U32(ctx, 31, 0x1E01B4u);
    ctx->pc = 0x1E01B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01ACu;
    // 0x1e01b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1E01ACu, 0x1E01B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01B4u;
label_1e01b4:
    // 0x1e01b4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1e01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1e01b8: 0x2445a080  addiu       $a1, $v0, -0x5F80
    ctx->pc = 0x1e01b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942848));
    // 0x1e01bc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e01c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e01c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e01c8: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E01C8u;
    {
        const bool branch_taken_0x1e01c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01C8u;
        // 0x1e01cc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e01c8) {
            ctx->pc = 0x1E01D4u;
            return;
        }
    }
    ctx->pc = 0x1E01D0u;
    // 0x1e01d0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1e01d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1e01d4u;
}
