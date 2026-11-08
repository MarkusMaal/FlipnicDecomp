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

// Function: FUN_001d4188
// Address: 0x1d4188 - 0x1d4288
void FUN_001d4188_0x1d4188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4188_0x1d4188");
#endif

    switch (ctx->pc) {
        case 0x1d41c0u: goto label_1d41c0;
        case 0x1d422cu: goto label_1d422c;
        case 0x1d4268u: goto label_1d4268;
        default: break;
    }

    ctx->pc = 0x1d4188u;

    // 0x1d4188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d4188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d418c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d418cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4190: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d4190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d4194: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x1d4194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d4198: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1D4198u;
    {
        const bool branch_taken_0x1d4198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4198u;
        // 0x1d419c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4198) {
            ctx->pc = 0x1D427Cu;
            goto label_1d427c;
        }
    }
    ctx->pc = 0x1D41A0u;
    // 0x1d41a0: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D41A0u;
    {
        const bool branch_taken_0x1d41a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41A0u;
        // 0x1d41a4: 0xdc8300a0  ld          $v1, 0xA0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41a0) {
            ctx->pc = 0x1D41B4u;
            goto label_1d41b4;
        }
    }
    ctx->pc = 0x1D41A8u;
    // 0x1d41a8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d41ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d41acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d41b0: 0x8c460080  lw          $a2, 0x80($v0)
    ctx->pc = 0x1d41b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_1d41b4:
    // 0x1d41b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d41b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d41b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d41b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d41bc: 0x0  nop
    ctx->pc = 0x1d41bcu;
    // NOP
label_1d41c0:
    // 0x1d41c0: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x1d41c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1d41c4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1d41c4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1d41c8: 0xe91014  dsllv       $v0, $t1, $a3
    ctx->pc = 0x1d41c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (GPR_U32(ctx, 7) & 0x3F));
    // 0x1d41cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d41ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d41d0: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D41D0u;
    {
        const bool branch_taken_0x1d41d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d41d0) {
            ctx->pc = 0x1D41D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D41D0u;
            // 0x1d41d4: 0x65080001  daddiu      $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4270u;
            goto label_1d4270;
        }
    }
    ctx->pc = 0x1D41D8u;
    // 0x1d41d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d41d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d41dc: 0x4a30024  bgezl       $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D41DCu;
    {
        const bool branch_taken_0x1d41dc = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1d41dc) {
            ctx->pc = 0x1D41E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D41DCu;
            // 0x1d41e0: 0x65080001  daddiu      $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4270u;
            goto label_1d4270;
        }
    }
    ctx->pc = 0x1D41E4u;
    // 0x1d41e4: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D41E4u;
    {
        const bool branch_taken_0x1d41e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d41e4) {
            ctx->pc = 0x1D41E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D41E4u;
            // 0x1d41e8: 0x2d030018  sltiu       $v1, $t0, 0x18 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4200u;
            goto label_1d4200;
        }
    }
    ctx->pc = 0x1D41ECu;
    // 0x1d41ec: 0x10c90012  beq         $a2, $t1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D41ECu;
    {
        const bool branch_taken_0x1d41ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x1D41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41ECu;
        // 0x1d41f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41ec) {
            ctx->pc = 0x1D4238u;
            goto label_1d4238;
        }
    }
    ctx->pc = 0x1D41F4u;
    // 0x1d41f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1D41F4u;
    {
        const bool branch_taken_0x1d41f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41F4u;
        // 0x1d41f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41f4) {
            ctx->pc = 0x1D4280u;
            goto label_1d4280;
        }
    }
    ctx->pc = 0x1D41FCu;
    // 0x1d41fc: 0x0  nop
    ctx->pc = 0x1d41fcu;
    // NOP
label_1d4200:
    // 0x1d4200: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1d4200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d4204: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1d4204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d4208: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d4208u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d420c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D420Cu;
    {
        const bool branch_taken_0x1d420c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D420Cu;
        // 0x1d4210: 0xe92804  sllv        $a1, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d420c) {
            ctx->pc = 0x1D4224u;
            goto label_1d4224;
        }
    }
    ctx->pc = 0x1D4214u;
    // 0x1d4214: 0x6502ffe8  daddiu      $v0, $t0, -0x18
    ctx->pc = 0x1d4214u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4294967272);
    // 0x1d4218: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d4218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d421c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d421cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d4220: 0x492804  sllv        $a1, $t1, $v0
    ctx->pc = 0x1d4220u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
label_1d4224:
    // 0x1d4224: 0xc07784c  jal         func_1DE130
    ctx->pc = 0x1D4224u;
    SET_GPR_U32(ctx, 31, 0x1D422Cu);
    ctx->pc = 0x1DE130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE130u, 0x1D4224u, 0x1D422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D422Cu;
label_1d422c:
    // 0x1d422c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D422Cu;
    {
        const bool branch_taken_0x1d422c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D422Cu;
        // 0x1d4230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d422c) {
            ctx->pc = 0x1D427Cu;
            goto label_1d427c;
        }
    }
    ctx->pc = 0x1D4234u;
    // 0x1d4234: 0x0  nop
    ctx->pc = 0x1d4234u;
    // NOP
label_1d4238:
    // 0x1d4238: 0x2d030018  sltiu       $v1, $t0, 0x18
    ctx->pc = 0x1d4238u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d423c: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1d423cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d4240: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1d4240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d4244: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d4244u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d4248: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4248u;
    {
        const bool branch_taken_0x1d4248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4248u;
        // 0x1d424c: 0xe62804  sllv        $a1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4248) {
            ctx->pc = 0x1D4260u;
            goto label_1d4260;
        }
    }
    ctx->pc = 0x1D4250u;
    // 0x1d4250: 0x6502ffe8  daddiu      $v0, $t0, -0x18
    ctx->pc = 0x1d4250u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4294967272);
    // 0x1d4254: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d4254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d4258: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d4258u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d425c: 0x462804  sllv        $a1, $a2, $v0
    ctx->pc = 0x1d425cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_1d4260:
    // 0x1d4260: 0xc077832  jal         func_1DE0C8
    ctx->pc = 0x1D4260u;
    SET_GPR_U32(ctx, 31, 0x1D4268u);
    ctx->pc = 0x1DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0C8u, 0x1D4260u, 0x1D4268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4268u;
label_1d4268:
    // 0x1d4268: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4268u;
    {
        const bool branch_taken_0x1d4268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4268u;
        // 0x1d426c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4268) {
            ctx->pc = 0x1D427Cu;
            goto label_1d427c;
        }
    }
    ctx->pc = 0x1D4270u;
label_1d4270:
    // 0x1d4270: 0x2d020030  sltiu       $v0, $t0, 0x30
    ctx->pc = 0x1d4270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1d4274: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D4274u;
    {
        const bool branch_taken_0x1d4274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4274u;
        // 0x1d4278: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4274) {
            ctx->pc = 0x1D41C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d41c0;
        }
    }
    ctx->pc = 0x1D427Cu;
label_1d427c:
    // 0x1d427c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d427cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4280:
    // 0x1d4280: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4280u;
        // 0x1d4284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4288u;
}
