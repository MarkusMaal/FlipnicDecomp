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

// Function: entry_0010a2a8
// Address: 0x10a2a8 - 0x10a324
void entry_0010a2a8_0x10a2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a2a8_0x10a2a8");
#endif

    switch (ctx->pc) {
        case 0x10a2e0u: goto label_10a2e0;
        default: break;
    }

    ctx->pc = 0x10a2a8u;

    // 0x10a2a8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x10a2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10a2ac: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x10a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10a2b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10a2b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10a2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x10a2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a2bc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x10a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10a2c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10a2c4: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x10a2c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x10a2c8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x10a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x10a2cc: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x10a2ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10a2d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10a2d4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x10a2d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a2d8: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x10A2D8u;
    SET_GPR_U32(ctx, 31, 0x10A2E0u);
    ctx->pc = 0x10A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A2D8u;
    // 0x10a2dc: 0x24a5e280  addiu       $a1, $a1, -0x1D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x10A2D8u, 0x10A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A2E0u;
label_10a2e0:
    // 0x10a2e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x10a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10a2e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10a2e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x10a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10a2ec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x10a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10a2f0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10a2f4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x10a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x10a2f8: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x10a2f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x10a2fc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x10a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10a300: 0x731818  mult        $v1, $v1, $s3
    ctx->pc = 0x10a300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10a304: 0x83a021  addu        $s4, $a0, $v1
    ctx->pc = 0x10a304u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10a308: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x10a308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10a30c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x10A30Cu;
    {
        const bool branch_taken_0x10a30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10a30c) {
            ctx->pc = 0x10A388u;
            return;
        }
    }
    ctx->pc = 0x10A314u;
    // 0x10a314: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A314u;
    {
        const bool branch_taken_0x10a314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a314) {
            ctx->pc = 0x10A324u;
            return;
        }
    }
    ctx->pc = 0x10A31Cu;
    // 0x10a31c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x10A31Cu;
    {
        const bool branch_taken_0x10a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a31c) {
            ctx->pc = 0x10A3D0u;
            return;
        }
    }
    ctx->pc = 0x10A324u;
}
