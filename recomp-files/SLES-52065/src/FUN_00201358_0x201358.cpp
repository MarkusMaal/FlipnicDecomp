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

// Function: FUN_00201358
// Address: 0x201358 - 0x2013e4
void FUN_00201358_0x201358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201358_0x201358");
#endif

    switch (ctx->pc) {
        case 0x2013a8u: goto label_2013a8;
        default: break;
    }

    ctx->pc = 0x201358u;

    // 0x201358: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x201358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20135c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20135cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x201360: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x201360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x201364: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x201364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20136c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20136cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201370: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x201370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x201374: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x201374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x201378: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201378u;
    {
        const bool branch_taken_0x201378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201378u;
        // 0x20137c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201378) {
            ctx->pc = 0x201394u;
            goto label_201394;
        }
    }
    ctx->pc = 0x201380u;
    // 0x201380: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x201380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x201384: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x201384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x201388: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x201388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x20138c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20138Cu;
    {
        const bool branch_taken_0x20138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20138Cu;
        // 0x201390: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20138c) {
            ctx->pc = 0x2013CCu;
            goto label_2013cc;
        }
    }
    ctx->pc = 0x201394u;
label_201394:
    // 0x201394: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x201394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x201398: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x201398u;
    {
        const bool branch_taken_0x201398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201398u;
        // 0x20139c: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201398) {
            ctx->pc = 0x2013C0u;
            goto label_2013c0;
        }
    }
    ctx->pc = 0x2013A0u;
    // 0x2013a0: 0xc0804ba  jal         func_2012E8
    ctx->pc = 0x2013A0u;
    SET_GPR_U32(ctx, 31, 0x2013A8u);
    ctx->pc = 0x2013A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2013A0u;
    // 0x2013a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2012E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2012E8u, 0x2013A0u, 0x2013A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013A8u;
label_2013a8:
    // 0x2013a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2013A8u;
    {
        const bool branch_taken_0x2013a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2013a8) {
            ctx->pc = 0x2013ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2013A8u;
            // 0x2013ac: 0x8e0201d4  lw          $v0, 0x1D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2013BCu;
            goto label_2013bc;
        }
    }
    ctx->pc = 0x2013B0u;
    // 0x2013b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2013b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2013b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2013B4u;
    {
        const bool branch_taken_0x2013b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013B4u;
        // 0x2013b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013b4) {
            ctx->pc = 0x2013CCu;
            goto label_2013cc;
        }
    }
    ctx->pc = 0x2013BCu;
label_2013bc:
    // 0x2013bc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2013bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2013c0:
    // 0x2013c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2013c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2013c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2013c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2013c8: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2013c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_2013cc:
    // 0x2013cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2013ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2013d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2013d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2013d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2013d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2013d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2013d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2013dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2013DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2013E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013DCu;
        // 0x2013e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2013DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2013E4u;
}
