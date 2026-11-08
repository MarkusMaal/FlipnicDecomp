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

// Function: FUN_001c11f0
// Address: 0x1c11f0 - 0x1c126c
void FUN_001c11f0_0x1c11f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c11f0_0x1c11f0");
#endif

    switch (ctx->pc) {
        case 0x1c121cu: goto label_1c121c;
        case 0x1c1224u: goto label_1c1224;
        case 0x1c1238u: goto label_1c1238;
        case 0x1c1240u: goto label_1c1240;
        case 0x1c1250u: goto label_1c1250;
        case 0x1c1258u: goto label_1c1258;
        default: break;
    }

    ctx->pc = 0x1c11f0u;

    // 0x1c11f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c11f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c11f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c11f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c11f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c11f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c11fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c11fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1200: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1c1200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1c1204: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c1204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1208: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1208u;
    {
        const bool branch_taken_0x1c1208 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1208u;
        // 0x1c120c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1208) {
            ctx->pc = 0x1C122Cu;
            goto label_1c122c;
        }
    }
    ctx->pc = 0x1C1210u;
    // 0x1c1210: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c1210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c1214: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1214u;
    SET_GPR_U32(ctx, 31, 0x1C121Cu);
    ctx->pc = 0x1C1218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1214u;
    // 0x1c1218: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1214u, 0x1C121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C121Cu;
label_1c121c:
    // 0x1c121c: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C121Cu;
    SET_GPR_U32(ctx, 31, 0x1C1224u);
    ctx->pc = 0x1C1220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C121Cu;
    // 0x1c1220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C121Cu, 0x1C1224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1224u;
label_1c1224:
    // 0x1c1224: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C1224u;
    {
        const bool branch_taken_0x1c1224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1224u;
        // 0x1c1228: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1224) {
            ctx->pc = 0x1C125Cu;
            goto label_1c125c;
        }
    }
    ctx->pc = 0x1C122Cu;
label_1c122c:
    // 0x1c122c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c122cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c1230: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1230u;
    SET_GPR_U32(ctx, 31, 0x1C1238u);
    ctx->pc = 0x1C1234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1230u;
    // 0x1c1234: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1230u, 0x1C1238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1238u;
label_1c1238:
    // 0x1c1238: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C1238u;
    SET_GPR_U32(ctx, 31, 0x1C1240u);
    ctx->pc = 0x1C123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1238u;
    // 0x1c123c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C1238u, 0x1C1240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1240u;
label_1c1240:
    // 0x1c1240: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1c1240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c1244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1248: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1248u;
    SET_GPR_U32(ctx, 31, 0x1C1250u);
    ctx->pc = 0x1C124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1248u;
    // 0x1c124c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1248u, 0x1C1250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1250u;
label_1c1250:
    // 0x1c1250: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C1250u;
    SET_GPR_U32(ctx, 31, 0x1C1258u);
    ctx->pc = 0x1C1254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1250u;
    // 0x1c1254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C1250u, 0x1C1258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1258u;
label_1c1258:
    // 0x1c1258: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c125c:
    // 0x1c125c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c125cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1264: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1264u;
        // 0x1c1268: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C126Cu;
}
