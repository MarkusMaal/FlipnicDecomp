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

// Function: FUN_00121310
// Address: 0x121310 - 0x1213a4
void FUN_00121310_0x121310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121310_0x121310");
#endif

    switch (ctx->pc) {
        case 0x121358u: goto label_121358;
        default: break;
    }

    ctx->pc = 0x121310u;

    // 0x121310: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x121310u;
    {
        const bool branch_taken_0x121310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x121314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121310u;
        // 0x121314: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121310) {
            ctx->pc = 0x121320u;
            goto label_121320;
        }
    }
    ctx->pc = 0x121318u;
    // 0x121318: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x121318u;
    {
        const bool branch_taken_0x121318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121318) {
            ctx->pc = 0x12139Cu;
            goto label_12139c;
        }
    }
    ctx->pc = 0x121320u;
label_121320:
    // 0x121320: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x121320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121324: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x121324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121328: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x121328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12132c: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x12132cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x121330: 0x1061823  subu        $v1, $t0, $a2
    ctx->pc = 0x121330u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x121334: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x121334u;
    {
        const bool branch_taken_0x121334 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x121338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121334u;
        // 0x121338: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121334) {
            ctx->pc = 0x121344u;
            goto label_121344;
        }
    }
    ctx->pc = 0x12133Cu;
    // 0x12133c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x12133cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x121340: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x121340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_121344:
    // 0x121344: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121344u;
    {
        const bool branch_taken_0x121344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121344u;
        // 0x121348: 0xc8082b  sltu        $at, $a2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121344) {
            ctx->pc = 0x121374u;
            goto label_121374;
        }
    }
    ctx->pc = 0x12134Cu;
    // 0x12134c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x12134cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121350: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x121350u;
    {
        const bool branch_taken_0x121350 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x121354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121350u;
        // 0x121354: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121350) {
            ctx->pc = 0x121374u;
            goto label_121374;
        }
    }
    ctx->pc = 0x121358u;
label_121358:
    // 0x121358: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x121358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12135c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x12135cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x121360: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x121360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x121364: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x121364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x121368: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x121368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x12136c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12136Cu;
    {
        const bool branch_taken_0x12136c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12136c) {
            ctx->pc = 0x121358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121358;
        }
    }
    ctx->pc = 0x121374u;
label_121374:
    // 0x121374: 0x0  nop
    ctx->pc = 0x121374u;
    // NOP
    // 0x121378: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x121378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x12137c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12137Cu;
    {
        const bool branch_taken_0x12137c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x121380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12137Cu;
        // 0x121380: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12137c) {
            ctx->pc = 0x12138Cu;
            goto label_12138c;
        }
    }
    ctx->pc = 0x121384u;
    // 0x121384: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x121384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x121388: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x121388u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_12138c:
    // 0x12138c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12138cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x121390: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x121390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121394: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x121394u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x121398: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x121398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_12139c:
    // 0x12139c: 0x3e00008  jr          $ra
    ctx->pc = 0x12139Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12139Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1213A4u;
}
