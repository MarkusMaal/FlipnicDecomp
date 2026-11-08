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

// Function: FUN_0019a0f0
// Address: 0x19a0f0 - 0x19a228
void FUN_0019a0f0_0x19a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a0f0_0x19a0f0");
#endif

    switch (ctx->pc) {
        case 0x19a0f0u: goto label_19a0f0;
        case 0x19a0f4u: goto label_19a0f4;
        case 0x19a0f8u: goto label_19a0f8;
        case 0x19a0fcu: goto label_19a0fc;
        case 0x19a100u: goto label_19a100;
        case 0x19a104u: goto label_19a104;
        case 0x19a108u: goto label_19a108;
        case 0x19a10cu: goto label_19a10c;
        case 0x19a110u: goto label_19a110;
        case 0x19a114u: goto label_19a114;
        case 0x19a118u: goto label_19a118;
        case 0x19a11cu: goto label_19a11c;
        case 0x19a120u: goto label_19a120;
        case 0x19a124u: goto label_19a124;
        case 0x19a128u: goto label_19a128;
        case 0x19a12cu: goto label_19a12c;
        case 0x19a130u: goto label_19a130;
        case 0x19a134u: goto label_19a134;
        case 0x19a138u: goto label_19a138;
        case 0x19a13cu: goto label_19a13c;
        case 0x19a140u: goto label_19a140;
        case 0x19a144u: goto label_19a144;
        case 0x19a148u: goto label_19a148;
        case 0x19a14cu: goto label_19a14c;
        case 0x19a150u: goto label_19a150;
        case 0x19a154u: goto label_19a154;
        case 0x19a158u: goto label_19a158;
        case 0x19a15cu: goto label_19a15c;
        case 0x19a160u: goto label_19a160;
        case 0x19a164u: goto label_19a164;
        case 0x19a168u: goto label_19a168;
        case 0x19a16cu: goto label_19a16c;
        case 0x19a170u: goto label_19a170;
        case 0x19a174u: goto label_19a174;
        case 0x19a178u: goto label_19a178;
        case 0x19a17cu: goto label_19a17c;
        case 0x19a180u: goto label_19a180;
        case 0x19a184u: goto label_19a184;
        case 0x19a188u: goto label_19a188;
        case 0x19a18cu: goto label_19a18c;
        case 0x19a190u: goto label_19a190;
        case 0x19a194u: goto label_19a194;
        case 0x19a198u: goto label_19a198;
        case 0x19a19cu: goto label_19a19c;
        case 0x19a1a0u: goto label_19a1a0;
        case 0x19a1a4u: goto label_19a1a4;
        case 0x19a1a8u: goto label_19a1a8;
        case 0x19a1acu: goto label_19a1ac;
        case 0x19a1b0u: goto label_19a1b0;
        case 0x19a1b4u: goto label_19a1b4;
        case 0x19a1b8u: goto label_19a1b8;
        case 0x19a1bcu: goto label_19a1bc;
        case 0x19a1c0u: goto label_19a1c0;
        case 0x19a1c4u: goto label_19a1c4;
        case 0x19a1c8u: goto label_19a1c8;
        case 0x19a1ccu: goto label_19a1cc;
        case 0x19a1d0u: goto label_19a1d0;
        case 0x19a1d4u: goto label_19a1d4;
        case 0x19a1d8u: goto label_19a1d8;
        case 0x19a1dcu: goto label_19a1dc;
        case 0x19a1e0u: goto label_19a1e0;
        case 0x19a1e4u: goto label_19a1e4;
        case 0x19a1e8u: goto label_19a1e8;
        case 0x19a1ecu: goto label_19a1ec;
        case 0x19a1f0u: goto label_19a1f0;
        case 0x19a1f4u: goto label_19a1f4;
        case 0x19a1f8u: goto label_19a1f8;
        case 0x19a1fcu: goto label_19a1fc;
        case 0x19a200u: goto label_19a200;
        case 0x19a204u: goto label_19a204;
        case 0x19a208u: goto label_19a208;
        case 0x19a20cu: goto label_19a20c;
        case 0x19a210u: goto label_19a210;
        case 0x19a214u: goto label_19a214;
        case 0x19a218u: goto label_19a218;
        case 0x19a21cu: goto label_19a21c;
        case 0x19a220u: goto label_19a220;
        case 0x19a224u: goto label_19a224;
        default: break;
    }

    ctx->pc = 0x19a0f0u;

label_19a0f0:
    // 0x19a0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19a0f4:
    // 0x19a0f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19a0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19a0f8:
    // 0x19a0f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19a0fc:
    // 0x19a0fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19a100:
    // 0x19a100: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a104:
    // 0x19a104: 0xc067f08  jal         func_19FC20
label_19a108:
    if (ctx->pc == 0x19A108u) {
        ctx->pc = 0x19A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A104u;
        // 0x19a108: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A10Cu;
        goto label_19a10c;
    }
    ctx->pc = 0x19A104u;
    SET_GPR_U32(ctx, 31, 0x19A10Cu);
    ctx->pc = 0x19A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A104u;
    // 0x19a108: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x19A104u, 0x19A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A10Cu;
label_19a10c:
    // 0x19a10c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a110:
    // 0x19a110: 0xc067f0c  jal         func_19FC30
label_19a114:
    if (ctx->pc == 0x19A114u) {
        ctx->pc = 0x19A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A110u;
        // 0x19a114: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A118u;
        goto label_19a118;
    }
    ctx->pc = 0x19A110u;
    SET_GPR_U32(ctx, 31, 0x19A118u);
    ctx->pc = 0x19A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A110u;
    // 0x19a114: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x19A110u, 0x19A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A118u;
label_19a118:
    // 0x19a118: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19a118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19a11c:
    // 0x19a11c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_19a120:
    if (ctx->pc == 0x19A120u) {
        ctx->pc = 0x19A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A11Cu;
        // 0x19a120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A124u;
        goto label_19a124;
    }
    ctx->pc = 0x19A11Cu;
    {
        const bool branch_taken_0x19a11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A11Cu;
        // 0x19a120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a11c) {
            ctx->pc = 0x19A160u;
            goto label_19a160;
        }
    }
    ctx->pc = 0x19A124u;
label_19a124:
    // 0x19a124: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19a124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a128:
    // 0x19a128: 0x10000005  b           . + 4 + (0x5 << 2)
label_19a12c:
    if (ctx->pc == 0x19A12Cu) {
        ctx->pc = 0x19A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A128u;
        // 0x19a12c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A130u;
        goto label_19a130;
    }
    ctx->pc = 0x19A128u;
    {
        const bool branch_taken_0x19a128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A128u;
        // 0x19a12c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a128) {
            ctx->pc = 0x19A140u;
            goto label_19a140;
        }
    }
    ctx->pc = 0x19A130u;
label_19a130:
    // 0x19a130: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x19a130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_19a134:
    // 0x19a134: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19a138:
    // 0x19a138: 0xac4004d0  sw          $zero, 0x4D0($v0)
    ctx->pc = 0x19a138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
label_19a13c:
    // 0x19a13c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x19a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_19a140:
    // 0x19a140: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x19a140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_19a144:
    // 0x19a144: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x19a144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19a148:
    // 0x19a148: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19a14c:
    if (ctx->pc == 0x19A14Cu) {
        ctx->pc = 0x19A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A148u;
        // 0x19a14c: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A150u;
        goto label_19a150;
    }
    ctx->pc = 0x19A148u;
    {
        const bool branch_taken_0x19a148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A148u;
        // 0x19a14c: 0x2241021  addu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a148) {
            ctx->pc = 0x19A134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a134;
        }
    }
    ctx->pc = 0x19A150u;
label_19a150:
    // 0x19a150: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x19a150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
label_19a154:
    // 0x19a154: 0xae200344  sw          $zero, 0x344($s1)
    ctx->pc = 0x19a154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 836), GPR_U32(ctx, 0));
label_19a158:
    // 0x19a158: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x19a158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
label_19a15c:
    // 0x19a15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a160:
    // 0x19a160: 0xc063dd4  jal         func_18F750
label_19a164:
    if (ctx->pc == 0x19A164u) {
        ctx->pc = 0x19A168u;
        goto label_19a168;
    }
    ctx->pc = 0x19A160u;
    SET_GPR_U32(ctx, 31, 0x19A168u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19A160u, 0x19A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A168u;
label_19a168:
    // 0x19a168: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19a168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19a16c:
    // 0x19a16c: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
label_19a170:
    if (ctx->pc == 0x19A170u) {
        ctx->pc = 0x19A174u;
        goto label_19a174;
    }
    ctx->pc = 0x19A16Cu;
    {
        const bool branch_taken_0x19a16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a16c) {
            ctx->pc = 0x19A1D8u;
            goto label_19a1d8;
        }
    }
    ctx->pc = 0x19A174u;
label_19a174:
    // 0x19a174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a178:
    // 0x19a178: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_19a17c:
    if (ctx->pc == 0x19A17Cu) {
        ctx->pc = 0x19A180u;
        goto label_19a180;
    }
    ctx->pc = 0x19A178u;
    {
        const bool branch_taken_0x19a178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a178) {
            ctx->pc = 0x19A1ACu;
            goto label_19a1ac;
        }
    }
    ctx->pc = 0x19A180u;
label_19a180:
    // 0x19a180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19a184:
    if (ctx->pc == 0x19A184u) {
        ctx->pc = 0x19A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A180u;
        // 0x19a184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A188u;
        goto label_19a188;
    }
    ctx->pc = 0x19A180u;
    {
        const bool branch_taken_0x19a180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A180u;
        // 0x19a184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a180) {
            ctx->pc = 0x19A194u;
            goto label_19a194;
        }
    }
    ctx->pc = 0x19A188u;
label_19a188:
    // 0x19a188: 0x10000019  b           . + 4 + (0x19 << 2)
label_19a18c:
    if (ctx->pc == 0x19A18Cu) {
        ctx->pc = 0x19A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A188u;
        // 0x19a18c: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A190u;
        goto label_19a190;
    }
    ctx->pc = 0x19A188u;
    {
        const bool branch_taken_0x19a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A188u;
        // 0x19a18c: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a188) {
            ctx->pc = 0x19A1F0u;
            goto label_19a1f0;
        }
    }
    ctx->pc = 0x19A190u;
label_19a190:
    // 0x19a190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a194:
    // 0x19a194: 0xc0667bc  jal         func_199EF0
label_19a198:
    if (ctx->pc == 0x19A198u) {
        ctx->pc = 0x19A19Cu;
        goto label_19a19c;
    }
    ctx->pc = 0x19A194u;
    SET_GPR_U32(ctx, 31, 0x19A19Cu);
    ctx->pc = 0x199EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EF0u, 0x19A194u, 0x19A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A19Cu;
label_19a19c:
    // 0x19a19c: 0xc063e14  jal         func_18F850
label_19a1a0:
    if (ctx->pc == 0x19A1A0u) {
        ctx->pc = 0x19A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A19Cu;
        // 0x19a1a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A1A4u;
        goto label_19a1a4;
    }
    ctx->pc = 0x19A19Cu;
    SET_GPR_U32(ctx, 31, 0x19A1A4u);
    ctx->pc = 0x19A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A19Cu;
    // 0x19a1a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19A19Cu, 0x19A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1A4u;
label_19a1a4:
    // 0x19a1a4: 0x10000011  b           . + 4 + (0x11 << 2)
label_19a1a8:
    if (ctx->pc == 0x19A1A8u) {
        ctx->pc = 0x19A1ACu;
        goto label_19a1ac;
    }
    ctx->pc = 0x19A1A4u;
    {
        const bool branch_taken_0x19a1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a1a4) {
            ctx->pc = 0x19A1ECu;
            goto label_19a1ec;
        }
    }
    ctx->pc = 0x19A1ACu;
label_19a1ac:
    // 0x19a1ac: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19a1b0:
    // 0x19a1b0: 0x8c452838  lw          $a1, 0x2838($v0)
    ctx->pc = 0x19a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10296)));
label_19a1b4:
    // 0x19a1b4: 0xc0667e0  jal         func_199F80
label_19a1b8:
    if (ctx->pc == 0x19A1B8u) {
        ctx->pc = 0x19A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1B4u;
        // 0x19a1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A1BCu;
        goto label_19a1bc;
    }
    ctx->pc = 0x19A1B4u;
    SET_GPR_U32(ctx, 31, 0x19A1BCu);
    ctx->pc = 0x19A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A1B4u;
    // 0x19a1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F80u, 0x19A1B4u, 0x19A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1BCu;
label_19a1bc:
    // 0x19a1bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_19a1c0:
    if (ctx->pc == 0x19A1C0u) {
        ctx->pc = 0x19A1C4u;
        goto label_19a1c4;
    }
    ctx->pc = 0x19A1BCu;
    {
        const bool branch_taken_0x19a1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a1bc) {
            ctx->pc = 0x19A1ECu;
            goto label_19a1ec;
        }
    }
    ctx->pc = 0x19A1C4u;
label_19a1c4:
    // 0x19a1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a1c8:
    // 0x19a1c8: 0xc063e08  jal         func_18F820
label_19a1cc:
    if (ctx->pc == 0x19A1CCu) {
        ctx->pc = 0x19A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1C8u;
        // 0x19a1cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A1D0u;
        goto label_19a1d0;
    }
    ctx->pc = 0x19A1C8u;
    SET_GPR_U32(ctx, 31, 0x19A1D0u);
    ctx->pc = 0x19A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A1C8u;
    // 0x19a1cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19A1C8u, 0x19A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1D0u;
label_19a1d0:
    // 0x19a1d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_19a1d4:
    if (ctx->pc == 0x19A1D4u) {
        ctx->pc = 0x19A1D8u;
        goto label_19a1d8;
    }
    ctx->pc = 0x19A1D0u;
    {
        const bool branch_taken_0x19a1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a1d0) {
            ctx->pc = 0x19A1ECu;
            goto label_19a1ec;
        }
    }
    ctx->pc = 0x19A1D8u;
label_19a1d8:
    // 0x19a1d8: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x19a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
label_19a1dc:
    // 0x19a1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a1e0:
    // 0x19a1e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a1e4:
    // 0x19a1e4: 0xc063e08  jal         func_18F820
label_19a1e8:
    if (ctx->pc == 0x19A1E8u) {
        ctx->pc = 0x19A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1E4u;
        // 0x19a1e8: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A1ECu;
        goto label_19a1ec;
    }
    ctx->pc = 0x19A1E4u;
    SET_GPR_U32(ctx, 31, 0x19A1ECu);
    ctx->pc = 0x19A1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A1E4u;
    // 0x19a1e8: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19A1E4u, 0x19A1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1ECu;
label_19a1ec:
    // 0x19a1ec: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x19a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_19a1f0:
    // 0x19a1f0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_19a1f4:
    if (ctx->pc == 0x19A1F4u) {
        ctx->pc = 0x19A1F8u;
        goto label_19a1f8;
    }
    ctx->pc = 0x19A1F0u;
    {
        const bool branch_taken_0x19a1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a1f0) {
            ctx->pc = 0x19A214u;
            goto label_19a214;
        }
    }
    ctx->pc = 0x19A1F8u;
label_19a1f8:
    // 0x19a1f8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_19a1fc:
    if (ctx->pc == 0x19A1FCu) {
        ctx->pc = 0x19A200u;
        goto label_19a200;
    }
    ctx->pc = 0x19A1F8u;
    {
        const bool branch_taken_0x19a1f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a1f8) {
            ctx->pc = 0x19A214u;
            goto label_19a214;
        }
    }
    ctx->pc = 0x19A200u;
label_19a200:
    // 0x19a200: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19a200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19a204:
    // 0x19a204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a208:
    // 0x19a208: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19a208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19a20c:
    // 0x19a20c: 0x320f809  jalr        $t9
label_19a210:
    if (ctx->pc == 0x19A210u) {
        ctx->pc = 0x19A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A20Cu;
        // 0x19a210: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A214u;
        goto label_19a214;
    }
    ctx->pc = 0x19A20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19A214u);
        ctx->pc = 0x19A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A20Cu;
        // 0x19a210: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A20Cu, 0x19A214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19A214u;
label_19a214:
    // 0x19a214: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19a214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19a218:
    // 0x19a218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19a21c:
    // 0x19a21c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19a220:
    // 0x19a220: 0x3e00008  jr          $ra
label_19a224:
    if (ctx->pc == 0x19A224u) {
        ctx->pc = 0x19A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A220u;
        // 0x19a224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A228u;
        goto label_fallthrough_0x19a220;
    }
    ctx->pc = 0x19A220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A220u;
        // 0x19a224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19a220:
    ctx->pc = 0x19A228u;
}
