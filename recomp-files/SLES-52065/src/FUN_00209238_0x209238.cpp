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

// Function: FUN_00209238
// Address: 0x209238 - 0x2092f0
void FUN_00209238_0x209238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209238_0x209238");
#endif

    switch (ctx->pc) {
        case 0x2092b8u: goto label_2092b8;
        case 0x2092e4u: goto label_2092e4;
        default: break;
    }

    ctx->pc = 0x209238u;

    // 0x209238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20923c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x209240: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x209240u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x209244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x209248: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x209248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x20924c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20924Cu;
    {
        const bool branch_taken_0x20924c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x209250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20924Cu;
        // 0x209250: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20924c) {
            ctx->pc = 0x209260u;
            goto label_209260;
        }
    }
    ctx->pc = 0x209254u;
    // 0x209254: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x209254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209258: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x209258u;
    {
        const bool branch_taken_0x209258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209258u;
        // 0x20925c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209258) {
            ctx->pc = 0x2092DCu;
            goto label_2092dc;
        }
    }
    ctx->pc = 0x209260u;
label_209260:
    // 0x209260: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x209260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x209264: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x209264u;
    {
        const bool branch_taken_0x209264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209264u;
        // 0x209268: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209264) {
            ctx->pc = 0x209290u;
            goto label_209290;
        }
    }
    ctx->pc = 0x20926Cu;
    // 0x20926c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x20926cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x209270: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209270u;
    {
        const bool branch_taken_0x209270 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x209274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209270u;
        // 0x209274: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209270) {
            ctx->pc = 0x209288u;
            goto label_209288;
        }
    }
    ctx->pc = 0x209278u;
    // 0x209278: 0x3c01cf00  lui         $at, 0xCF00
    ctx->pc = 0x209278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52992 << 16));
    // 0x20927c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20927cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209280: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x209280u;
    {
        const bool branch_taken_0x209280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209280u;
        // 0x209284: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209280) {
            ctx->pc = 0x2092E8u;
            goto label_2092e8;
        }
    }
    ctx->pc = 0x209288u;
label_209288:
    // 0x209288: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x209288u;
    {
        const bool branch_taken_0x209288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209288u;
        // 0x20928c: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209288) {
            ctx->pc = 0x209294u;
            goto label_209294;
        }
    }
    ctx->pc = 0x209290u;
label_209290:
    // 0x209290: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x209290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_209294:
    // 0x209294: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x209294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x209298: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x209298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x20929c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20929cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2092a0: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2092a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2092a4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2092A4u;
    {
        const bool branch_taken_0x2092a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2092A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092A4u;
        // 0x2092a8: 0x3c053fff  lui         $a1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2092a4) {
            ctx->pc = 0x2092DCu;
            goto label_2092dc;
        }
    }
    ctx->pc = 0x2092ACu;
    // 0x2092ac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2092acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2092b0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2092b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2092b4: 0x0  nop
    ctx->pc = 0x2092b4u;
    // NOP
label_2092b8:
    // 0x2092b8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2092b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2092bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2092bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2092c0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2092c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2092c4: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x2092c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2092c8: 0x0  nop
    ctx->pc = 0x2092c8u;
    // NOP
    // 0x2092cc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2092CCu;
    {
        const bool branch_taken_0x2092cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2092cc) {
            ctx->pc = 0x2092B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2092b8;
        }
    }
    ctx->pc = 0x2092D4u;
    // 0x2092d4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2092d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2092d8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2092d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_2092dc:
    // 0x2092dc: 0xc082238  jal         func_2088E0
    ctx->pc = 0x2092DCu;
    SET_GPR_U32(ctx, 31, 0x2092E4u);
    ctx->pc = 0x2092E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2092DCu;
    // 0x2092e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2088E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2088E0u, 0x2092DCu, 0x2092E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2092E4u;
label_2092e4:
    // 0x2092e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2092e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2092e8:
    // 0x2092e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2092E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2092ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092E8u;
        // 0x2092ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2092E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2092F0u;
}
