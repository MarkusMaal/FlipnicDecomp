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

// Function: entry_0010d8b0
// Address: 0x10d8b0 - 0x10d948
void entry_0010d8b0_0x10d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d8b0_0x10d8b0");
#endif

    switch (ctx->pc) {
        case 0x10d8d8u: goto label_10d8d8;
        case 0x10d900u: goto label_10d900;
        case 0x10d92cu: goto label_10d92c;
        case 0x10d940u: goto label_10d940;
        default: break;
    }

    ctx->pc = 0x10d8b0u;

label_10d8b0:
    // 0x10d8b0: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x10d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_10d8b4:
    // 0x10d8b4: 0x24510280  addiu       $s1, $v0, 0x280
    ctx->pc = 0x10d8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_10d8b8:
    // 0x10d8b8: 0x8c420650  lw          $v0, 0x650($v0)
    ctx->pc = 0x10d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1616)));
label_10d8bc:
    // 0x10d8bc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_10d8c0:
    if (ctx->pc == 0x10D8C0u) {
        ctx->pc = 0x10D8C4u;
        goto label_10d8c4;
    }
    ctx->pc = 0x10D8BCu;
    {
        const bool branch_taken_0x10d8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d8bc) {
            ctx->pc = 0x10D960u;
            return;
        }
    }
    ctx->pc = 0x10D8C4u;
label_10d8c4:
    // 0x10d8c4: 0x8eb90008  lw          $t9, 0x8($s5)
    ctx->pc = 0x10d8c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_10d8c8:
    // 0x10d8c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10d8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10d8cc:
    // 0x10d8cc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x10d8ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_10d8d0:
    // 0x10d8d0: 0x320f809  jalr        $t9
label_10d8d4:
    if (ctx->pc == 0x10D8D4u) {
        ctx->pc = 0x10D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8D0u;
        // 0x10d8d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D8D8u;
        goto label_10d8d8;
    }
    ctx->pc = 0x10D8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10D8D8u);
        ctx->pc = 0x10D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8D0u;
        // 0x10d8d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D8D0u, 0x10D8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10D8D8u;
label_10d8d8:
    // 0x10d8d8: 0xc68c01c0  lwc1        $f12, 0x1C0($s4)
    ctx->pc = 0x10d8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_10d8dc:
    // 0x10d8dc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x10d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_10d8e0:
    // 0x10d8e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x10d8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10d8e4:
    // 0x10d8e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10d8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10d8e8:
    // 0x10d8e8: 0x26850300  addiu       $a1, $s4, 0x300
    ctx->pc = 0x10d8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 768));
label_10d8ec:
    // 0x10d8ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10d8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d8f0:
    // 0x10d8f0: 0x26270300  addiu       $a3, $s1, 0x300
    ctx->pc = 0x10d8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_10d8f4:
    // 0x10d8f4: 0x26880290  addiu       $t0, $s4, 0x290
    ctx->pc = 0x10d8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 656));
label_10d8f8:
    // 0x10d8f8: 0xc055160  jal         func_154580
label_10d8fc:
    if (ctx->pc == 0x10D8FCu) {
        ctx->pc = 0x10D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8F8u;
        // 0x10d8fc: 0x26290290  addiu       $t1, $s1, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D900u;
        goto label_10d900;
    }
    ctx->pc = 0x10D8F8u;
    SET_GPR_U32(ctx, 31, 0x10D900u);
    ctx->pc = 0x10D8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D8F8u;
    // 0x10d8fc: 0x26290290  addiu       $t1, $s1, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154580u, 0x10D8F8u, 0x10D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D900u;
label_10d900:
    // 0x10d900: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10d900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10d904:
    // 0x10d904: 0x0  nop
    ctx->pc = 0x10d904u;
    // NOP
label_10d908:
    // 0x10d908: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10d908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10d90c:
    // 0x10d90c: 0x0  nop
    ctx->pc = 0x10d90cu;
    // NOP
label_10d910:
    // 0x10d910: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_10d914:
    if (ctx->pc == 0x10D914u) {
        ctx->pc = 0x10D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D910u;
        // 0x10d914: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D918u;
        goto label_10d918;
    }
    ctx->pc = 0x10D910u;
    {
        const bool branch_taken_0x10d910 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D910u;
        // 0x10d914: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d910) {
            ctx->pc = 0x10D948u;
            return;
        }
    }
    ctx->pc = 0x10D918u;
label_10d918:
    // 0x10d918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10d918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10d91c:
    // 0x10d91c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x10d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_10d920:
    // 0x10d920: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10d920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10d924:
    // 0x10d924: 0xc056194  jal         func_158650
label_10d928:
    if (ctx->pc == 0x10D928u) {
        ctx->pc = 0x10D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D924u;
        // 0x10d928: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D92Cu;
        goto label_10d92c;
    }
    ctx->pc = 0x10D924u;
    SET_GPR_U32(ctx, 31, 0x10D92Cu);
    ctx->pc = 0x10D928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D924u;
    // 0x10d928: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x10D924u, 0x10D92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D92Cu;
label_10d92c:
    // 0x10d92c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x10d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_10d930:
    // 0x10d930: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10d930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10d934:
    // 0x10d934: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x10d934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10d938:
    // 0x10d938: 0xc056194  jal         func_158650
label_10d93c:
    if (ctx->pc == 0x10D93Cu) {
        ctx->pc = 0x10D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D938u;
        // 0x10d93c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D940u;
        goto label_10d940;
    }
    ctx->pc = 0x10D938u;
    SET_GPR_U32(ctx, 31, 0x10D940u);
    ctx->pc = 0x10D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D938u;
    // 0x10d93c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x10D938u, 0x10D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D940u;
label_10d940:
    // 0x10d940: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10d940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10d944:
    // 0x10d944: 0xae2203d0  sw          $v0, 0x3D0($s1)
    ctx->pc = 0x10d944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 976), GPR_U32(ctx, 2));
    ctx->pc = 0x10d948u;
}
