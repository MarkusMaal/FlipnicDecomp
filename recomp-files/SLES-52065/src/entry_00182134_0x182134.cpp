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

// Function: entry_00182134
// Address: 0x182134 - 0x1821a8
void entry_00182134_0x182134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182134_0x182134");
#endif

    switch (ctx->pc) {
        case 0x182144u: goto label_182144;
        case 0x182154u: goto label_182154;
        case 0x18216cu: goto label_18216c;
        case 0x182194u: goto label_182194;
        default: break;
    }

    ctx->pc = 0x182134u;

label_182134:
    // 0x182134: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x182134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_182138:
    // 0x182138: 0x24540020  addiu       $s4, $v0, 0x20
    ctx->pc = 0x182138u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_18213c:
    // 0x18213c: 0xc080748  jal         func_201D20
label_182140:
    if (ctx->pc == 0x182140u) {
        ctx->pc = 0x182140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18213Cu;
        // 0x182140: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182144u;
        goto label_182144;
    }
    ctx->pc = 0x18213Cu;
    SET_GPR_U32(ctx, 31, 0x182144u);
    ctx->pc = 0x182140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18213Cu;
    // 0x182140: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x18213Cu, 0x182144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182144u;
label_182144:
    // 0x182144: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_182148:
    if (ctx->pc == 0x182148u) {
        ctx->pc = 0x182148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182144u;
        // 0x182148: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18214Cu;
        goto label_18214c;
    }
    ctx->pc = 0x182144u;
    {
        const bool branch_taken_0x182144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182144u;
        // 0x182148: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182144) {
            ctx->pc = 0x1821A8u;
            return;
        }
    }
    ctx->pc = 0x18214Cu;
label_18214c:
    // 0x18214c: 0xc04c0e0  jal         func_130380
label_182150:
    if (ctx->pc == 0x182150u) {
        ctx->pc = 0x182154u;
        goto label_182154;
    }
    ctx->pc = 0x18214Cu;
    SET_GPR_U32(ctx, 31, 0x182154u);
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x18214Cu, 0x182154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182154u;
label_182154:
    // 0x182154: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x182154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_182158:
    // 0x182158: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x182158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_18215c:
    // 0x18215c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_182160:
    if (ctx->pc == 0x182160u) {
        ctx->pc = 0x182160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18215Cu;
        // 0x182160: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182164u;
        goto label_182164;
    }
    ctx->pc = 0x18215Cu;
    {
        const bool branch_taken_0x18215c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18215Cu;
        // 0x182160: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18215c) {
            ctx->pc = 0x1821A8u;
            return;
        }
    }
    ctx->pc = 0x182164u;
label_182164:
    // 0x182164: 0xc049ed0  jal         func_127B40
label_182168:
    if (ctx->pc == 0x182168u) {
        ctx->pc = 0x182168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182164u;
        // 0x182168: 0x248487c0  addiu       $a0, $a0, -0x7840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18216Cu;
        goto label_18216c;
    }
    ctx->pc = 0x182164u;
    SET_GPR_U32(ctx, 31, 0x18216Cu);
    ctx->pc = 0x182168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182164u;
    // 0x182168: 0x248487c0  addiu       $a0, $a0, -0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x182164u, 0x18216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18216Cu;
label_18216c:
    // 0x18216c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18216cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_182170:
    // 0x182170: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x182170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_182174:
    // 0x182174: 0x8c2387c4  lw          $v1, -0x783C($at)
    ctx->pc = 0x182174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936516)));
label_182178:
    // 0x182178: 0x248487c0  addiu       $a0, $a0, -0x7840
    ctx->pc = 0x182178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936512));
label_18217c:
    // 0x18217c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_182180:
    // 0x182180: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x182180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182184:
    // 0x182184: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x182184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_182188:
    // 0x182188: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x182188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18218c:
    // 0x18218c: 0xc0484ec  jal         func_1213B0
label_182190:
    if (ctx->pc == 0x182190u) {
        ctx->pc = 0x182190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18218Cu;
        // 0x182190: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182194u;
        goto label_182194;
    }
    ctx->pc = 0x18218Cu;
    SET_GPR_U32(ctx, 31, 0x182194u);
    ctx->pc = 0x182190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18218Cu;
    // 0x182190: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x18218Cu, 0x182194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182194u;
label_182194:
    // 0x182194: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x182194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_182198:
    // 0x182198: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x182198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18219c:
    // 0x18219c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x18219cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1821a0:
    // 0x1821a0: 0x320f809  jalr        $t9
label_1821a4:
    if (ctx->pc == 0x1821A4u) {
        ctx->pc = 0x1821A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821A0u;
        // 0x1821a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1821A8u;
        goto label_fallthrough_0x1821a0;
    }
    ctx->pc = 0x1821A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1821A8u);
        ctx->pc = 0x1821A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821A0u;
        // 0x1821a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1821A0u, 0x1821A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1821a0:
    ctx->pc = 0x1821A8u;
}
