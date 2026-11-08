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

// Function: entry_0015a250
// Address: 0x15a250 - 0x15a2a8
void entry_0015a250_0x15a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a250_0x15a250");
#endif

    switch (ctx->pc) {
        case 0x15a28cu: goto label_15a28c;
        case 0x15a29cu: goto label_15a29c;
        default: break;
    }

    ctx->pc = 0x15a250u;

    // 0x15a250: 0x860301f4  lh          $v1, 0x1F4($s0)
    ctx->pc = 0x15a250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x15a254: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x15a254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x15a258: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x15a258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x15a25c: 0x8e0401f0  lw          $a0, 0x1F0($s0)
    ctx->pc = 0x15a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x15a260: 0xc52c01c0  lwc1        $f12, 0x1C0($t1)
    ctx->pc = 0x15a260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a264: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15a264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15a268: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x15a268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a26c: 0x25280300  addiu       $t0, $t1, 0x300
    ctx->pc = 0x15a26cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 768));
    // 0x15a270: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15a270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a274: 0x0  nop
    ctx->pc = 0x15a274u;
    // NOP
    // 0x15a278: 0x0  nop
    ctx->pc = 0x15a278u;
    // NOP
    // 0x15a27c: 0x1010  mfhi        $v0
    ctx->pc = 0x15a27cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15a280: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15a280u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15a284: 0xc054a44  jal         func_152910
    ctx->pc = 0x15A284u;
    SET_GPR_U32(ctx, 31, 0x15A28Cu);
    ctx->pc = 0x15A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A284u;
    // 0x15a288: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152910u, 0x15A284u, 0x15A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A28Cu;
label_15a28c:
    // 0x15a28c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A28Cu;
    {
        const bool branch_taken_0x15a28c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x15A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A28Cu;
        // 0x15a290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a28c) {
            ctx->pc = 0x15A2A8u;
            return;
        }
    }
    ctx->pc = 0x15A294u;
    // 0x15a294: 0xc042118  jal         func_108460
    ctx->pc = 0x15A294u;
    SET_GPR_U32(ctx, 31, 0x15A29Cu);
    ctx->pc = 0x15A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A294u;
    // 0x15a298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x15A294u, 0x15A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A29Cu;
label_15a29c:
    // 0x15a29c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a2a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15A2A0u;
    {
        const bool branch_taken_0x15a2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A2A0u;
        // 0x15a2a4: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a2a0) {
            ctx->pc = 0x15A2ACu;
            return;
        }
    }
    ctx->pc = 0x15A2A8u;
}
