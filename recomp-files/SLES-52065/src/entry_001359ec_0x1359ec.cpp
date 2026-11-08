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

// Function: entry_001359ec
// Address: 0x1359ec - 0x135a40
void entry_001359ec_0x1359ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001359ec_0x1359ec");
#endif

    switch (ctx->pc) {
        case 0x1359f4u: goto label_1359f4;
        case 0x135a00u: goto label_135a00;
        case 0x135a18u: goto label_135a18;
        case 0x135a24u: goto label_135a24;
        default: break;
    }

    ctx->pc = 0x1359ecu;

    // 0x1359ec: 0xc04c554  jal         func_131550
    ctx->pc = 0x1359ECu;
    SET_GPR_U32(ctx, 31, 0x1359F4u);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1359ECu, 0x1359F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359F4u;
label_1359f4:
    // 0x1359f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1359f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359f8: 0xc04c550  jal         func_131540
    ctx->pc = 0x1359F8u;
    SET_GPR_U32(ctx, 31, 0x135A00u);
    ctx->pc = 0x1359FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359F8u;
    // 0x1359fc: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x1359F8u, 0x135A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A00u;
label_135a00:
    // 0x135a00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x135a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x135a04: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x135a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x135a08: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x135a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x135a0c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x135a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x135a10: 0xc04c554  jal         func_131550
    ctx->pc = 0x135A10u;
    SET_GPR_U32(ctx, 31, 0x135A18u);
    ctx->pc = 0x135A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A10u;
    // 0x135a14: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135A10u, 0x135A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A18u;
label_135a18:
    // 0x135a18: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x135a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135a1c: 0xc04c54c  jal         func_131530
    ctx->pc = 0x135A1Cu;
    SET_GPR_U32(ctx, 31, 0x135A24u);
    ctx->pc = 0x135A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A1Cu;
    // 0x135a20: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x135A1Cu, 0x135A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A24u;
label_135a24:
    // 0x135a24: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x135a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x135a28: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x135a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x135a2c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x135a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x135a30: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x135a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
    // 0x135a34: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x135a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135a38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x135A38u;
    {
        const bool branch_taken_0x135a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A38u;
        // 0x135a3c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a38) {
            ctx->pc = 0x135A94u;
            return;
        }
    }
    ctx->pc = 0x135A40u;
}
