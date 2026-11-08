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

// Function: entry_001f88ac
// Address: 0x1f88ac - 0x1f8928
void entry_001f88ac_0x1f88ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f88ac_0x1f88ac");
#endif

    switch (ctx->pc) {
        case 0x1f88d4u: goto label_1f88d4;
        case 0x1f88e0u: goto label_1f88e0;
        case 0x1f8910u: goto label_1f8910;
        default: break;
    }

    ctx->pc = 0x1f88acu;

    // 0x1f88ac: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f88acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f88b0: 0x26101b00  addiu       $s0, $s0, 0x1B00
    ctx->pc = 0x1f88b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6912));
    // 0x1f88b4: 0x24511680  addiu       $s1, $v0, 0x1680
    ctx->pc = 0x1f88b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x1f88b8: 0xac541680  sw          $s4, 0x1680($v0)
    ctx->pc = 0x1f88b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5760), GPR_U32(ctx, 20));
    // 0x1f88bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f88bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88c0: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x1f88c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    // 0x1f88c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f88c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88c8: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x1f88c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x1f88cc: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F88CCu;
    SET_GPR_U32(ctx, 31, 0x1F88D4u);
    ctx->pc = 0x1F88D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F88CCu;
    // 0x1f88d0: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F88CCu, 0x1F88D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88D4u;
label_1f88d4:
    // 0x1f88d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f88d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88d8: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F88D8u;
    SET_GPR_U32(ctx, 31, 0x1F88E0u);
    ctx->pc = 0x1F88DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F88D8u;
    // 0x1f88dc: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F88D8u, 0x1F88E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88E0u;
label_1f88e0:
    // 0x1f88e0: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f88e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f88e4: 0x3c0b0020  lui         $t3, 0x20
    ctx->pc = 0x1f88e4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32 << 16));
    // 0x1f88e8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1f88e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1f88ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f88ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f88f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88f4: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f88f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f88f8: 0x256b87b8  addiu       $t3, $t3, -0x7848
    ctx->pc = 0x1f88f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294936504));
    // 0x1f88fc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f88fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f8900: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8904: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f8904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8908: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F8908u;
    SET_GPR_U32(ctx, 31, 0x1F8910u);
    ctx->pc = 0x1F890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8908u;
    // 0x1f890c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F8908u, 0x1F8910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8910u;
label_1f8910:
    // 0x1f8910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8914: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8914u;
    {
        const bool branch_taken_0x1f8914 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8914u;
        // 0x1f8918: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8914) {
            ctx->pc = 0x1F8928u;
            return;
        }
    }
    ctx->pc = 0x1F891Cu;
    // 0x1f891c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f8920: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8920u;
    {
        const bool branch_taken_0x1f8920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8920u;
        // 0x1f8924: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8920) {
            ctx->pc = 0x1F8930u;
            return;
        }
    }
    ctx->pc = 0x1F8928u;
}
