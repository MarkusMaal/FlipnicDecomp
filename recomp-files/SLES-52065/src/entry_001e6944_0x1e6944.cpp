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

// Function: entry_001e6944
// Address: 0x1e6944 - 0x1e69dc
void entry_001e6944_0x1e6944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6944_0x1e6944");
#endif

    switch (ctx->pc) {
        case 0x1e6958u: goto label_1e6958;
        case 0x1e6970u: goto label_1e6970;
        case 0x1e69d0u: goto label_1e69d0;
        default: break;
    }

    ctx->pc = 0x1e6944u;

    // 0x1e6944: 0x8fc200bc  lw          $v0, 0xBC($fp)
    ctx->pc = 0x1e6944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x1e6948: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1e6948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1e694c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6950: 0xc080702  jal         func_201C08
    ctx->pc = 0x1E6950u;
    SET_GPR_U32(ctx, 31, 0x1E6958u);
    ctx->pc = 0x1E6954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6950u;
    // 0x1e6954: 0x24a53d30  addiu       $a1, $a1, 0x3D30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1E6950u, 0x1E6958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6958u;
label_1e6958:
    // 0x1e6958: 0x8fc500b4  lw          $a1, 0xB4($fp)
    ctx->pc = 0x1e6958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 180)));
    // 0x1e695c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e695cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e6960: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e6960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e6964: 0x24843d50  addiu       $a0, $a0, 0x3D50
    ctx->pc = 0x1e6964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15696));
    // 0x1e6968: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E6968u;
    SET_GPR_U32(ctx, 31, 0x1E6970u);
    ctx->pc = 0x1E696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6968u;
    // 0x1e696c: 0x24c61450  addiu       $a2, $a2, 0x1450 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E6968u, 0x1E6970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6970u;
label_1e6970:
    // 0x1e6970: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E6970u;
    {
        const bool branch_taken_0x1e6970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6970) {
            ctx->pc = 0x1E69DCu;
            return;
        }
    }
    ctx->pc = 0x1E6978u;
    // 0x1e6978: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e6978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e697c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e697cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6980: 0x2444003a  addiu       $a0, $v0, 0x3A
    ctx->pc = 0x1e6980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
    // 0x1e6984: 0x9042003a  lbu         $v0, 0x3A($v0)
    ctx->pc = 0x1e6984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x1e6988: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e6988u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e698c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e698cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1e6990: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e6990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e6994: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E6994u;
    {
        const bool branch_taken_0x1e6994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6994u;
        // 0x1e6998: 0x34620001  ori         $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6994) {
            ctx->pc = 0x1E69A0u;
            goto label_1e69a0;
        }
    }
    ctx->pc = 0x1E699Cu;
    // 0x1e699c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1e699cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e69a0:
    // 0x1e69a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e69a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e69a8: 0x9043003a  lbu         $v1, 0x3A($v0)
    ctx->pc = 0x1e69a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x1e69ac: 0x9042003b  lbu         $v0, 0x3B($v0)
    ctx->pc = 0x1e69acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 59)));
    // 0x1e69b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e69b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e69b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e69b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e69b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E69B8u;
    {
        const bool branch_taken_0x1e69b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E69B8u;
        // 0x1e69bc: 0x27c40030  addiu       $a0, $fp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e69b8) {
            ctx->pc = 0x1E69D4u;
            goto label_1e69d4;
        }
    }
    ctx->pc = 0x1E69C0u;
    // 0x1e69c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e69c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e69c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e69c8: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E69C8u;
    SET_GPR_U32(ctx, 31, 0x1E69D0u);
    ctx->pc = 0x1E69CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E69C8u;
    // 0x1e69cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E69C8u, 0x1E69D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69D0u;
label_1e69d0:
    // 0x1e69d0: 0x27c40030  addiu       $a0, $fp, 0x30
    ctx->pc = 0x1e69d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
label_1e69d4:
    // 0x1e69d4: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E69D4u;
    SET_GPR_U32(ctx, 31, 0x1E69DCu);
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E69D4u, 0x1E69DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E69DCu;
}
