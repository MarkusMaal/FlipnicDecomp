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

// Function: entry_001269d4
// Address: 0x1269d4 - 0x126a28
void entry_001269d4_0x1269d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001269d4_0x1269d4");
#endif

    switch (ctx->pc) {
        case 0x126a04u: goto label_126a04;
        case 0x126a0cu: goto label_126a0c;
        case 0x126a18u: goto label_126a18;
        default: break;
    }

    ctx->pc = 0x1269d4u;

    // 0x1269d4: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1269d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1269d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1269d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269dc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1269dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1269e0: 0x2610eb10  addiu       $s0, $s0, -0x14F0
    ctx->pc = 0x1269e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961936));
    // 0x1269e4: 0xe6a000c4  swc1        $f0, 0xC4($s5)
    ctx->pc = 0x1269e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 196), bits); }
    // 0x1269e8: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x1269e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1269ec: 0xe6a000c0  swc1        $f0, 0xC0($s5)
    ctx->pc = 0x1269ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 192), bits); }
    // 0x1269f0: 0x7aa20080  lq          $v0, 0x80($s5)
    ctx->pc = 0x1269f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1269f4: 0x7ea200b0  sq          $v0, 0xB0($s5)
    ctx->pc = 0x1269f4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 176), GPR_VEC(ctx, 2));
    // 0x1269f8: 0x7aa20070  lq          $v0, 0x70($s5)
    ctx->pc = 0x1269f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1269fc: 0xc080702  jal         func_201C08
    ctx->pc = 0x1269FCu;
    SET_GPR_U32(ctx, 31, 0x126A04u);
    ctx->pc = 0x126A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1269FCu;
    // 0x126a00: 0x7ea200a0  sq          $v0, 0xA0($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1269FCu, 0x126A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A04u;
label_126a04:
    // 0x126a04: 0xc080d98  jal         func_203660
    ctx->pc = 0x126A04u;
    SET_GPR_U32(ctx, 31, 0x126A0Cu);
    ctx->pc = 0x126A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A04u;
    // 0x126a08: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x126A04u, 0x126A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A0Cu;
label_126a0c:
    // 0x126a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x126a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a10: 0xc080874  jal         func_2021D0
    ctx->pc = 0x126A10u;
    SET_GPR_U32(ctx, 31, 0x126A18u);
    ctx->pc = 0x126A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A10u;
    // 0x126a14: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x126A10u, 0x126A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A18u;
label_126a18:
    // 0x126a18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x126A18u;
    {
        const bool branch_taken_0x126a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A18u;
        // 0x126a1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a18) {
            ctx->pc = 0x126A28u;
            return;
        }
    }
    ctx->pc = 0x126A20u;
    // 0x126a20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126a24: 0xaea20144  sw          $v0, 0x144($s5)
    ctx->pc = 0x126a24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 324), GPR_U32(ctx, 2));
    ctx->pc = 0x126a28u;
}
