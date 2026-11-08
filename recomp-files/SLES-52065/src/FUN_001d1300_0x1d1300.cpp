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

// Function: FUN_001d1300
// Address: 0x1d1300 - 0x1d1370
void FUN_001d1300_0x1d1300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1300_0x1d1300");
#endif

    switch (ctx->pc) {
        case 0x1d1340u: goto label_1d1340;
        case 0x1d1358u: goto label_1d1358;
        default: break;
    }

    ctx->pc = 0x1d1300u;

    // 0x1d1300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d1308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d130c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1314: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D1314u;
    {
        const bool branch_taken_0x1d1314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1314u;
        // 0x1d1318: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1314) {
            ctx->pc = 0x1D1358u;
            goto label_1d1358;
        }
    }
    ctx->pc = 0x1D131Cu;
    // 0x1d131c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1d131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1d1320: 0x2442bfe0  addiu       $v0, $v0, -0x4020
    ctx->pc = 0x1d1320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950880));
    // 0x1d1324: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1324u;
    {
        const bool branch_taken_0x1d1324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1324u;
        // 0x1d1328: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1324) {
            ctx->pc = 0x1D1340u;
            goto label_1d1340;
        }
    }
    ctx->pc = 0x1D132Cu;
    // 0x1d132c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1d132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1d1330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1334: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1d1334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1d1338: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1D1338u;
    SET_GPR_U32(ctx, 31, 0x1D1340u);
    ctx->pc = 0x1D133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1338u;
    // 0x1d133c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1D1338u, 0x1D1340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1340u;
label_1d1340:
    // 0x1d1340: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1d1340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d1344: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d1344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d1348: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1348u;
    {
        const bool branch_taken_0x1d1348 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1348u;
        // 0x1d134c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1348) {
            ctx->pc = 0x1D135Cu;
            goto label_1d135c;
        }
    }
    ctx->pc = 0x1D1350u;
    // 0x1d1350: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1D1350u;
    SET_GPR_U32(ctx, 31, 0x1D1358u);
    ctx->pc = 0x1D1354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1350u;
    // 0x1d1354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1D1350u, 0x1D1358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1358u;
label_1d1358:
    // 0x1d1358: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d1358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d135c:
    // 0x1d135c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d135cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1368: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1368u;
        // 0x1d136c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1370u;
}
