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

// Function: FUN_00122480
// Address: 0x122480 - 0x122554
void FUN_00122480_0x122480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122480_0x122480");
#endif

    switch (ctx->pc) {
        case 0x1224a4u: goto label_1224a4;
        case 0x1224c4u: goto label_1224c4;
        case 0x1224ccu: goto label_1224cc;
        case 0x1224f4u: goto label_1224f4;
        case 0x122514u: goto label_122514;
        case 0x12251cu: goto label_12251c;
        default: break;
    }

    ctx->pc = 0x122480u;

    // 0x122480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x122484: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x122484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x122488: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x122488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12248c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12248cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x122490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x122490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x122494: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x122494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x122498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x122498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12249c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x12249Cu;
    SET_GPR_U32(ctx, 31, 0x1224A4u);
    ctx->pc = 0x1224A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12249Cu;
    // 0x1224a0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12249Cu, 0x1224A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224A4u;
label_1224a4:
    // 0x1224a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1224a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224a8: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1224A8u;
    {
        const bool branch_taken_0x1224a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1224ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224A8u;
        // 0x1224ac: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224a8) {
            ctx->pc = 0x1224CCu;
            goto label_1224cc;
        }
    }
    ctx->pc = 0x1224B0u;
    // 0x1224b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1224b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1224b4: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1224b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1224b8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1224b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1224bc: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1224BCu;
    SET_GPR_U32(ctx, 31, 0x1224C4u);
    ctx->pc = 0x1224C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224BCu;
    // 0x1224c0: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1224BCu, 0x1224C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224C4u;
label_1224c4:
    // 0x1224c4: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1224C4u;
    SET_GPR_U32(ctx, 31, 0x1224CCu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1224C4u, 0x1224CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224CCu;
label_1224cc:
    // 0x1224cc: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1224ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1224d0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1224d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1224d4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1224D4u;
    {
        const bool branch_taken_0x1224d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1224D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224D4u;
        // 0x1224d8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224d4) {
            ctx->pc = 0x122520u;
            goto label_122520;
        }
    }
    ctx->pc = 0x1224DCu;
    // 0x1224dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1224dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1224e0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1224e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1224e4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1224e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1224e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1224e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1224ec: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1224ECu;
    SET_GPR_U32(ctx, 31, 0x1224F4u);
    ctx->pc = 0x1224F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224ECu;
    // 0x1224f0: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1224ECu, 0x1224F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224F4u;
label_1224f4:
    // 0x1224f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1224f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224f8: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1224F8u;
    {
        const bool branch_taken_0x1224f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1224FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224F8u;
        // 0x1224fc: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224f8) {
            ctx->pc = 0x12251Cu;
            goto label_12251c;
        }
    }
    ctx->pc = 0x122500u;
    // 0x122500: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122504: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x122508: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12250c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12250Cu;
    SET_GPR_U32(ctx, 31, 0x122514u);
    ctx->pc = 0x122510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12250Cu;
    // 0x122510: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12250Cu, 0x122514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122514u;
label_122514:
    // 0x122514: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122514u;
    SET_GPR_U32(ctx, 31, 0x12251Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122514u, 0x12251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12251Cu;
label_12251c:
    // 0x12251c: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x12251cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_122520:
    // 0x122520: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x122520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x122524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x122524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122528: 0x93838048  lbu         $v1, -0x7FB8($gp)
    ctx->pc = 0x122528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934600)));
    // 0x12252c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x12252cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x122530: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x122530u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x122534: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x122534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x122538: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x122538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x12253c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12253cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12254c: 0x3e00008  jr          $ra
    ctx->pc = 0x12254Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12254Cu;
        // 0x122550: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12254Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122554u;
}
