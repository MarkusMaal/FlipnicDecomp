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

// Function: FUN_001f61b8
// Address: 0x1f61b8 - 0x1f62d8
void FUN_001f61b8_0x1f61b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f61b8_0x1f61b8");
#endif

    switch (ctx->pc) {
        case 0x1f6204u: goto label_1f6204;
        default: break;
    }

    ctx->pc = 0x1f61b8u;

    // 0x1f61b8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1f61b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f61bc: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1f61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f61c0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1f61c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f61c4: 0x71031818  mult1       $v1, $t0, $v1
    ctx->pc = 0x1f61c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f61c8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1f61c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f61cc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f61ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f61d0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f61d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f61d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f61d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f61d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f61dc: 0x244210d0  addiu       $v0, $v0, 0x10D0
    ctx->pc = 0x1f61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x1f61e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f61e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f61e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f61e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f61e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f61e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f61ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f61ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f61f0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f61f4: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F61F4u;
    {
        const bool branch_taken_0x1f61f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61F4u;
        // 0x1f61f8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61f4) {
            ctx->pc = 0x1F62C0u;
            goto label_1f62c0;
        }
    }
    ctx->pc = 0x1F61FCu;
    // 0x1f61fc: 0xc07d7ba  jal         func_1F5EE8
    ctx->pc = 0x1F61FCu;
    SET_GPR_U32(ctx, 31, 0x1F6204u);
    ctx->pc = 0x1F6200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F61FCu;
    // 0x1f6200: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5EE8u, 0x1F61FCu, 0x1F6204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6204u;
label_1f6204:
    // 0x1f6204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6208: 0x90850072  lbu         $a1, 0x72($a0)
    ctx->pc = 0x1f6208u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
    // 0x1f620c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6210: 0x14a2002c  bne         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1F6210u;
    {
        const bool branch_taken_0x1f6210 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6210u;
        // 0x1f6214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6210) {
            ctx->pc = 0x1F62C4u;
            goto label_1f62c4;
        }
    }
    ctx->pc = 0x1F6218u;
    // 0x1f6218: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x1f6218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1f621c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f621cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f6220: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F6220u;
    {
        const bool branch_taken_0x1f6220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6220u;
        // 0x1f6224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6220) {
            ctx->pc = 0x1F62C4u;
            goto label_1f62c4;
        }
    }
    ctx->pc = 0x1F6228u;
    // 0x1f6228: 0x9083006a  lbu         $v1, 0x6A($a0)
    ctx->pc = 0x1f6228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x1f622c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x1f622cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f6230: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F6230u;
    {
        const bool branch_taken_0x1f6230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6230u;
        // 0x1f6234: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6230) {
            ctx->pc = 0x1F62C0u;
            goto label_1f62c0;
        }
    }
    ctx->pc = 0x1F6238u;
    // 0x1f6238: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6238u;
    {
        const bool branch_taken_0x1f6238 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6238u;
        // 0x1f623c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6238) {
            ctx->pc = 0x1F6248u;
            goto label_1f6248;
        }
    }
    ctx->pc = 0x1F6240u;
    // 0x1f6240: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1F6240u;
    {
        const bool branch_taken_0x1f6240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6240u;
        // 0x1f6244: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6240) {
            ctx->pc = 0x1F62C4u;
            goto label_1f62c4;
        }
    }
    ctx->pc = 0x1F6248u;
label_1f6248:
    // 0x1f6248: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F6248u;
    {
        const bool branch_taken_0x1f6248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6248u;
        // 0x1f624c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6248) {
            ctx->pc = 0x1F6290u;
            goto label_1f6290;
        }
    }
    ctx->pc = 0x1F6250u;
    // 0x1f6250: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6250u;
    {
        const bool branch_taken_0x1f6250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6250u;
        // 0x1f6254: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6250) {
            ctx->pc = 0x1F6268u;
            goto label_1f6268;
        }
    }
    ctx->pc = 0x1F6258u;
    // 0x1f6258: 0x12050009  beq         $s0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6258u;
    {
        const bool branch_taken_0x1f6258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6258u;
        // 0x1f625c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6258) {
            ctx->pc = 0x1F6280u;
            goto label_1f6280;
        }
    }
    ctx->pc = 0x1F6260u;
    // 0x1f6260: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1F6260u;
    {
        const bool branch_taken_0x1f6260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6260u;
        // 0x1f6264: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6260) {
            ctx->pc = 0x1F62C8u;
            goto label_1f62c8;
        }
    }
    ctx->pc = 0x1F6268u;
label_1f6268:
    // 0x1f6268: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F6268u;
    {
        const bool branch_taken_0x1f6268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6268u;
        // 0x1f626c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6268) {
            ctx->pc = 0x1F62A0u;
            goto label_1f62a0;
        }
    }
    ctx->pc = 0x1F6270u;
    // 0x1f6270: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F6270u;
    {
        const bool branch_taken_0x1f6270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6270u;
        // 0x1f6274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6270) {
            ctx->pc = 0x1F62B0u;
            goto label_1f62b0;
        }
    }
    ctx->pc = 0x1F6278u;
    // 0x1f6278: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F6278u;
    {
        const bool branch_taken_0x1f6278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6278u;
        // 0x1f627c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6278) {
            ctx->pc = 0x1F62C8u;
            goto label_1f62c8;
        }
    }
    ctx->pc = 0x1F6280u;
label_1f6280:
    // 0x1f6280: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1f6280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f6284: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f6284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f6288: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F6288u;
    {
        const bool branch_taken_0x1f6288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6288u;
        // 0x1f628c: 0x90620030  lbu         $v0, 0x30($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6288) {
            ctx->pc = 0x1F62C4u;
            goto label_1f62c4;
        }
    }
    ctx->pc = 0x1F6290u;
label_1f6290:
    // 0x1f6290: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1f6290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f6294: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f6294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f6298: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F6298u;
    {
        const bool branch_taken_0x1f6298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6298u;
        // 0x1f629c: 0x90620031  lbu         $v0, 0x31($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 49)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6298) {
            ctx->pc = 0x1F62C4u;
            goto label_1f62c4;
        }
    }
    ctx->pc = 0x1F62A0u;
label_1f62a0:
    // 0x1f62a0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1f62a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f62a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f62a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f62a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F62A8u;
    {
        const bool branch_taken_0x1f62a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62A8u;
        // 0x1f62ac: 0x90620032  lbu         $v0, 0x32($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f62a8) {
            ctx->pc = 0x1F62C4u;
            goto label_1f62c4;
        }
    }
    ctx->pc = 0x1F62B0u;
label_1f62b0:
    // 0x1f62b0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1f62b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f62b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f62b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f62b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F62B8u;
    {
        const bool branch_taken_0x1f62b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62B8u;
        // 0x1f62bc: 0x90620033  lbu         $v0, 0x33($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 51)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f62b8) {
            ctx->pc = 0x1F62C4u;
            goto label_1f62c4;
        }
    }
    ctx->pc = 0x1F62C0u;
label_1f62c0:
    // 0x1f62c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f62c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f62c4:
    // 0x1f62c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f62c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f62c8:
    // 0x1f62c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f62c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f62cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f62ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f62d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F62D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62D0u;
        // 0x1f62d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F62D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F62D8u;
}
