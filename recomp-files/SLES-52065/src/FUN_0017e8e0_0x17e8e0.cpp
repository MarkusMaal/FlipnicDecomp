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

// Function: FUN_0017e8e0
// Address: 0x17e8e0 - 0x17e9b4
void FUN_0017e8e0_0x17e8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e8e0_0x17e8e0");
#endif

    switch (ctx->pc) {
        case 0x17e908u: goto label_17e908;
        case 0x17e9a0u: goto label_17e9a0;
        default: break;
    }

    ctx->pc = 0x17e8e0u;

    // 0x17e8e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e8e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17e8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17e8e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17e8ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e8f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17e8f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17e8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8f8: 0x8c861020  lw          $a2, 0x1020($a0)
    ctx->pc = 0x17e8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4128)));
    // 0x17e8fc: 0x8c871024  lw          $a3, 0x1024($a0)
    ctx->pc = 0x17e8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4132)));
    // 0x17e900: 0xc05fb00  jal         func_17EC00
    ctx->pc = 0x17E900u;
    SET_GPR_U32(ctx, 31, 0x17E908u);
    ctx->pc = 0x17E904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E900u;
    // 0x17e904: 0x8c85101c  lw          $a1, 0x101C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC00u, 0x17E900u, 0x17E908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E908u;
label_17e908:
    // 0x17e908: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E908u;
    {
        const bool branch_taken_0x17e908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E908u;
        // 0x17e90c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e908) {
            ctx->pc = 0x17E918u;
            goto label_17e918;
        }
    }
    ctx->pc = 0x17E910u;
    // 0x17e910: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x17E910u;
    {
        const bool branch_taken_0x17e910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E910u;
        // 0x17e914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e910) {
            ctx->pc = 0x17E9A0u;
            goto label_17e9a0;
        }
    }
    ctx->pc = 0x17E918u;
label_17e918:
    // 0x17e918: 0x1223001a  beq         $s1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17E918u;
    {
        const bool branch_taken_0x17e918 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e918) {
            ctx->pc = 0x17E984u;
            goto label_17e984;
        }
    }
    ctx->pc = 0x17E920u;
    // 0x17e920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e924: 0x1223000e  beq         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17E924u;
    {
        const bool branch_taken_0x17e924 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e924) {
            ctx->pc = 0x17E960u;
            goto label_17e960;
        }
    }
    ctx->pc = 0x17E92Cu;
    // 0x17e92c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E92Cu;
    {
        const bool branch_taken_0x17e92c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e92c) {
            ctx->pc = 0x17E93Cu;
            goto label_17e93c;
        }
    }
    ctx->pc = 0x17E934u;
    // 0x17e934: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x17E934u;
    {
        const bool branch_taken_0x17e934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E934u;
        // 0x17e938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e934) {
            ctx->pc = 0x17E9A0u;
            goto label_17e9a0;
        }
    }
    ctx->pc = 0x17E93Cu;
label_17e93c:
    // 0x17e93c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e940: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E940u;
    {
        const bool branch_taken_0x17e940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e940) {
            ctx->pc = 0x17E950u;
            goto label_17e950;
        }
    }
    ctx->pc = 0x17E948u;
    // 0x17e948: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E948u;
    {
        const bool branch_taken_0x17e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E948u;
        // 0x17e94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e948) {
            ctx->pc = 0x17E958u;
            goto label_17e958;
        }
    }
    ctx->pc = 0x17E950u;
label_17e950:
    // 0x17e950: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e954: 0x0  nop
    ctx->pc = 0x17e954u;
    // NOP
label_17e958:
    // 0x17e958: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17E958u;
    {
        const bool branch_taken_0x17e958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E958u;
        // 0x17e95c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e958) {
            ctx->pc = 0x17E9A4u;
            goto label_17e9a4;
        }
    }
    ctx->pc = 0x17E960u;
label_17e960:
    // 0x17e960: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17e960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e964: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E964u;
    {
        const bool branch_taken_0x17e964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e964) {
            ctx->pc = 0x17E974u;
            goto label_17e974;
        }
    }
    ctx->pc = 0x17E96Cu;
    // 0x17e96c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E96Cu;
    {
        const bool branch_taken_0x17e96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E96Cu;
        // 0x17e970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e96c) {
            ctx->pc = 0x17E97Cu;
            goto label_17e97c;
        }
    }
    ctx->pc = 0x17E974u;
label_17e974:
    // 0x17e974: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e978: 0x0  nop
    ctx->pc = 0x17e978u;
    // NOP
label_17e97c:
    // 0x17e97c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17E97Cu;
    {
        const bool branch_taken_0x17e97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e97c) {
            ctx->pc = 0x17E9A0u;
            goto label_17e9a0;
        }
    }
    ctx->pc = 0x17E984u;
label_17e984:
    // 0x17e984: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17e984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17e988: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E988u;
    {
        const bool branch_taken_0x17e988 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E988u;
        // 0x17e98c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e988) {
            ctx->pc = 0x17E998u;
            goto label_17e998;
        }
    }
    ctx->pc = 0x17E990u;
    // 0x17e990: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E990u;
    {
        const bool branch_taken_0x17e990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E990u;
        // 0x17e994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e990) {
            ctx->pc = 0x17E9A0u;
            goto label_17e9a0;
        }
    }
    ctx->pc = 0x17E998u;
label_17e998:
    // 0x17e998: 0xc051198  jal         func_144660
    ctx->pc = 0x17E998u;
    SET_GPR_U32(ctx, 31, 0x17E9A0u);
    ctx->pc = 0x144660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144660u, 0x17E998u, 0x17E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E9A0u;
label_17e9a0:
    // 0x17e9a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17e9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17e9a4:
    // 0x17e9a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e9a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x17E9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9ACu;
        // 0x17e9b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E9B4u;
}
