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

// Function: entry_0013d3bc
// Address: 0x13d3bc - 0x13d404
void entry_0013d3bc_0x13d3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d3bc_0x13d3bc");
#endif

    switch (ctx->pc) {
        case 0x13d3c4u: goto label_13d3c4;
        case 0x13d3d8u: goto label_13d3d8;
        case 0x13d3ecu: goto label_13d3ec;
        default: break;
    }

    ctx->pc = 0x13d3bcu;

label_13d3bc:
    // 0x13d3bc: 0xc05fe4c  jal         func_17F930
label_13d3c0:
    if (ctx->pc == 0x13D3C0u) {
        ctx->pc = 0x13D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3BCu;
        // 0x13d3c0: 0xae05017c  sw          $a1, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D3C4u;
        goto label_13d3c4;
    }
    ctx->pc = 0x13D3BCu;
    SET_GPR_U32(ctx, 31, 0x13D3C4u);
    ctx->pc = 0x13D3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3BCu;
    // 0x13d3c0: 0xae05017c  sw          $a1, 0x17C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x13D3BCu, 0x13D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3C4u;
label_13d3c4:
    // 0x13d3c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13d3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d3c8:
    // 0x13d3c8: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x13d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_13d3cc:
    // 0x13d3cc: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x13d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_13d3d0:
    // 0x13d3d0: 0xc05fec0  jal         func_17FB00
label_13d3d4:
    if (ctx->pc == 0x13D3D4u) {
        ctx->pc = 0x13D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3D0u;
        // 0x13d3d4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D3D8u;
        goto label_13d3d8;
    }
    ctx->pc = 0x13D3D0u;
    SET_GPR_U32(ctx, 31, 0x13D3D8u);
    ctx->pc = 0x13D3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3D0u;
    // 0x13d3d4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x13D3D0u, 0x13D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3D8u;
label_13d3d8:
    // 0x13d3d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x13d3d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13d3dc:
    // 0x13d3dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d3e0:
    // 0x13d3e0: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x13d3e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_13d3e4:
    // 0x13d3e4: 0x320f809  jalr        $t9
label_13d3e8:
    if (ctx->pc == 0x13D3E8u) {
        ctx->pc = 0x13D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3E4u;
        // 0x13d3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D3ECu;
        goto label_13d3ec;
    }
    ctx->pc = 0x13D3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D3ECu);
        ctx->pc = 0x13D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3E4u;
        // 0x13d3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D3E4u, 0x13D3ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D3ECu;
label_13d3ec:
    // 0x13d3ec: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x13d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_13d3f0:
    // 0x13d3f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x13d3f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13d3f4:
    // 0x13d3f4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x13d3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_13d3f8:
    // 0x13d3f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13d3fc:
    // 0x13d3fc: 0xc05ff20  jal         func_17FC80
label_13d400:
    if (ctx->pc == 0x13D400u) {
        ctx->pc = 0x13D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3FCu;
        // 0x13d400: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D404u;
        goto label_fallthrough_0x13d3fc;
    }
    ctx->pc = 0x13D3FCu;
    SET_GPR_U32(ctx, 31, 0x13D404u);
    ctx->pc = 0x13D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3FCu;
    // 0x13d400: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FC80u, 0x13D3FCu, 0x13D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x13d3fc:
    ctx->pc = 0x13D404u;
}
