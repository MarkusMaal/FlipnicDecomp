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

// Function: entry_001ef8f0
// Address: 0x1ef8f0 - 0x1ef98c
void entry_001ef8f0_0x1ef8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef8f0_0x1ef8f0");
#endif

    switch (ctx->pc) {
        case 0x1ef930u: goto label_1ef930;
        case 0x1ef96cu: goto label_1ef96c;
        case 0x1ef97cu: goto label_1ef97c;
        case 0x1ef984u: goto label_1ef984;
        default: break;
    }

    ctx->pc = 0x1ef8f0u;

    // 0x1ef8f0: 0x24c2f700  addiu       $v0, $a2, -0x900
    ctx->pc = 0x1ef8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964992));
    // 0x1ef8f4: 0x3c036fff  lui         $v1, 0x6FFF
    ctx->pc = 0x1ef8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28671 << 16));
    // 0x1ef8f8: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1ef8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ef8fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ef8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ef900: 0x2a903  sra         $s5, $v0, 4
    ctx->pc = 0x1ef900u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1ef904: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x1ef904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x1ef908: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1ef908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1ef90c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef910: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x1ef910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
    // 0x1ef914: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ef914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ef918: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1ef918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1ef91c: 0x2694ee40  addiu       $s4, $s4, -0x11C0
    ctx->pc = 0x1ef91cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    // 0x1ef920: 0xae350414  sw          $s5, 0x414($s1)
    ctx->pc = 0x1ef920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 21));
    // 0x1ef924: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1ef924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1ef928: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EF928u;
    SET_GPR_U32(ctx, 31, 0x1EF930u);
    ctx->pc = 0x1EF92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF928u;
    // 0x1ef92c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EF928u, 0x1EF930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF930u;
label_1ef930:
    // 0x1ef930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ef930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef934: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1ef934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1ef938: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ef938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ef93c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1ef93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1ef940: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ef940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ef944: 0x26c4f900  addiu       $a0, $s6, -0x700
    ctx->pc = 0x1ef944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965504));
    // 0x1ef948: 0x27c7e200  addiu       $a3, $fp, -0x1E00
    ctx->pc = 0x1ef948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959616));
    // 0x1ef94c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef950: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ef950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ef954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef958: 0x24080418  addiu       $t0, $zero, 0x418
    ctx->pc = 0x1ef958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    // 0x1ef95c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1ef95cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef960: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ef960u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ef964: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1EF964u;
    SET_GPR_U32(ctx, 31, 0x1EF96Cu);
    ctx->pc = 0x1EF968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF964u;
    // 0x1ef968: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1EF964u, 0x1EF96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF96Cu;
label_1ef96c:
    // 0x1ef96c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF96Cu;
    {
        const bool branch_taken_0x1ef96c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EF970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF96Cu;
        // 0x1ef970: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef96c) {
            ctx->pc = 0x1EF98Cu;
            return;
        }
    }
    ctx->pc = 0x1EF974u;
    // 0x1ef974: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EF974u;
    SET_GPR_U32(ctx, 31, 0x1EF97Cu);
    ctx->pc = 0x1EF978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF974u;
    // 0x1ef978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EF974u, 0x1EF97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF97Cu;
label_1ef97c:
    // 0x1ef97c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EF97Cu;
    SET_GPR_U32(ctx, 31, 0x1EF984u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EF97Cu, 0x1EF984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF984u;
label_1ef984:
    // 0x1ef984: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1EF984u;
    {
        const bool branch_taken_0x1ef984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF984u;
        // 0x1ef988: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef984) {
            ctx->pc = 0x1EFA14u;
            return;
        }
    }
    ctx->pc = 0x1EF98Cu;
}
