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

// Function: FUN_001302a0
// Address: 0x1302a0 - 0x130340
void FUN_001302a0_0x1302a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001302a0_0x1302a0");
#endif

    switch (ctx->pc) {
        case 0x1302dcu: goto label_1302dc;
        case 0x1302e8u: goto label_1302e8;
        case 0x1302f0u: goto label_1302f0;
        case 0x1302fcu: goto label_1302fc;
        case 0x130310u: goto label_130310;
        case 0x130328u: goto label_130328;
        default: break;
    }

    ctx->pc = 0x1302a0u;

    // 0x1302a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1302a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1302a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1302a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1302a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1302a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1302ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1302acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1302b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1302b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302b4: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1302B4u;
    {
        const bool branch_taken_0x1302b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1302B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302B4u;
        // 0x1302b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302b4) {
            ctx->pc = 0x130328u;
            goto label_130328;
        }
    }
    ctx->pc = 0x1302BCu;
    // 0x1302bc: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1302BCu;
    {
        const bool branch_taken_0x1302bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1302C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1302BCu;
        // 0x1302c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302bc) {
            ctx->pc = 0x130314u;
            goto label_130314;
        }
    }
    ctx->pc = 0x1302C4u;
    // 0x1302c4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1302C4u;
    {
        const bool branch_taken_0x1302c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1302c4) {
            ctx->pc = 0x130310u;
            goto label_130310;
        }
    }
    ctx->pc = 0x1302CCu;
    // 0x1302cc: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1302CCu;
    {
        const bool branch_taken_0x1302cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1302cc) {
            ctx->pc = 0x130310u;
            goto label_130310;
        }
    }
    ctx->pc = 0x1302D4u;
    // 0x1302d4: 0xc04c0d8  jal         func_130360
    ctx->pc = 0x1302D4u;
    SET_GPR_U32(ctx, 31, 0x1302DCu);
    ctx->pc = 0x130360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130360u, 0x1302D4u, 0x1302DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302DCu;
label_1302dc:
    // 0x1302dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1302dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302e0: 0xc04c0d0  jal         func_130340
    ctx->pc = 0x1302E0u;
    SET_GPR_U32(ctx, 31, 0x1302E8u);
    ctx->pc = 0x1302E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302E0u;
    // 0x1302e4: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130340u, 0x1302E0u, 0x1302E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302E8u;
label_1302e8:
    // 0x1302e8: 0xc04c0d8  jal         func_130360
    ctx->pc = 0x1302E8u;
    SET_GPR_U32(ctx, 31, 0x1302F0u);
    ctx->pc = 0x1302ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302E8u;
    // 0x1302ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130360u, 0x1302E8u, 0x1302F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302F0u;
label_1302f0:
    // 0x1302f0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1302f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1302f4: 0xc04c0d4  jal         func_130350
    ctx->pc = 0x1302F4u;
    SET_GPR_U32(ctx, 31, 0x1302FCu);
    ctx->pc = 0x1302F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302F4u;
    // 0x1302f8: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130350u, 0x1302F4u, 0x1302FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1302FCu;
label_1302fc:
    // 0x1302fc: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1302fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x130300: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130304: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x130304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x130308: 0xc04c404  jal         func_131010
    ctx->pc = 0x130308u;
    SET_GPR_U32(ctx, 31, 0x130310u);
    ctx->pc = 0x13030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130308u;
    // 0x13030c: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131010u, 0x130308u, 0x130310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130310u;
label_130310:
    // 0x130310: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x130310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_130314:
    // 0x130314: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x130314u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x130318: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x130318u;
    {
        const bool branch_taken_0x130318 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130318u;
        // 0x13031c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130318) {
            ctx->pc = 0x13032Cu;
            goto label_13032c;
        }
    }
    ctx->pc = 0x130320u;
    // 0x130320: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130320u;
    SET_GPR_U32(ctx, 31, 0x130328u);
    ctx->pc = 0x130324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130320u;
    // 0x130324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130320u, 0x130328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130328u;
label_130328:
    // 0x130328: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x130328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13032c:
    // 0x13032c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13032cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130338: 0x3e00008  jr          $ra
    ctx->pc = 0x130338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130338u;
        // 0x13033c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130340u;
}
