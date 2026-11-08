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

// Function: entry_00102f74
// Address: 0x102f74 - 0x102fd0
void entry_00102f74_0x102f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102f74_0x102f74");
#endif

    switch (ctx->pc) {
        case 0x102f94u: goto label_102f94;
        default: break;
    }

    ctx->pc = 0x102f74u;

label_102f74:
    // 0x102f74: 0x0  nop
    ctx->pc = 0x102f74u;
    // NOP
label_102f78:
    // 0x102f78: 0x8682002c  lh          $v0, 0x2C($s4)
    ctx->pc = 0x102f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 44)));
label_102f7c:
    // 0x102f7c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_102f80:
    if (ctx->pc == 0x102F80u) {
        ctx->pc = 0x102F84u;
        goto label_102f84;
    }
    ctx->pc = 0x102F7Cu;
    {
        const bool branch_taken_0x102f7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x102f7c) {
            ctx->pc = 0x102FD0u;
            return;
        }
    }
    ctx->pc = 0x102F84u;
label_102f84:
    // 0x102f84: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x102f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102f88:
    // 0x102f88: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x102f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_102f8c:
    // 0x102f8c: 0xc06cf0c  jal         func_1B3C30
label_102f90:
    if (ctx->pc == 0x102F90u) {
        ctx->pc = 0x102F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F8Cu;
        // 0x102f90: 0x24a5e0c0  addiu       $a1, $a1, -0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F94u;
        goto label_102f94;
    }
    ctx->pc = 0x102F8Cu;
    SET_GPR_U32(ctx, 31, 0x102F94u);
    ctx->pc = 0x102F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F8Cu;
    // 0x102f90: 0x24a5e0c0  addiu       $a1, $a1, -0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x102F8Cu, 0x102F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F94u;
label_102f94:
    // 0x102f94: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x102f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_102f98:
    // 0x102f98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_102f9c:
    // 0x102f9c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x102f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_102fa0:
    // 0x102fa0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_102fa4:
    // 0x102fa4: 0x8685002c  lh          $a1, 0x2C($s4)
    ctx->pc = 0x102fa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 44)));
label_102fa8:
    // 0x102fa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x102fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_102fac:
    // 0x102fac: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x102facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_102fb0:
    // 0x102fb0: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x102fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_102fb4:
    // 0x102fb4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x102fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_102fb8:
    // 0x102fb8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x102fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_102fbc:
    // 0x102fbc: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x102fbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_102fc0:
    // 0x102fc0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x102fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_102fc4:
    // 0x102fc4: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x102fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_102fc8:
    // 0x102fc8: 0x320f809  jalr        $t9
label_102fcc:
    if (ctx->pc == 0x102FCCu) {
        ctx->pc = 0x102FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FC8u;
        // 0x102fcc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FD0u;
        goto label_fallthrough_0x102fc8;
    }
    ctx->pc = 0x102FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102FD0u);
        ctx->pc = 0x102FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FC8u;
        // 0x102fcc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102FC8u, 0x102FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x102fc8:
    ctx->pc = 0x102FD0u;
}
