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

// Function: entry_00166cc4
// Address: 0x166cc4 - 0x166d38
void entry_00166cc4_0x166cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166cc4_0x166cc4");
#endif

    switch (ctx->pc) {
        case 0x166cf0u: goto label_166cf0;
        case 0x166d14u: goto label_166d14;
        case 0x166d28u: goto label_166d28;
        case 0x166d34u: goto label_166d34;
        default: break;
    }

    ctx->pc = 0x166cc4u;

    // 0x166cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166cc8: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x166cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x166ccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166cd0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x166cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x166cd4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x166cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x166cd8: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x166cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x166cdc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x166cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166ce0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x166ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166ce4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x166ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x166ce8: 0xc0425d4  jal         func_109750
    ctx->pc = 0x166CE8u;
    SET_GPR_U32(ctx, 31, 0x166CF0u);
    ctx->pc = 0x166CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166CE8u;
    // 0x166cec: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x166CE8u, 0x166CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CF0u;
label_166cf0:
    // 0x166cf0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x166cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x166cf4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x166cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x166cf8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x166cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x166cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166d04: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x166d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166d08: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x166d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166d0c: 0xc056194  jal         func_158650
    ctx->pc = 0x166D0Cu;
    SET_GPR_U32(ctx, 31, 0x166D14u);
    ctx->pc = 0x166D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D0Cu;
    // 0x166d10: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x166D0Cu, 0x166D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D14u;
label_166d14:
    // 0x166d14: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x166d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x166d18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x166d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x166d1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166d20: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x166D20u;
    SET_GPR_U32(ctx, 31, 0x166D28u);
    ctx->pc = 0x166D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D20u;
    // 0x166d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x166D20u, 0x166D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D28u;
label_166d28:
    // 0x166d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166d2c: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x166D2Cu;
    SET_GPR_U32(ctx, 31, 0x166D34u);
    ctx->pc = 0x166D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D2Cu;
    // 0x166d30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x166D2Cu, 0x166D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D34u;
label_166d34:
    // 0x166d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x166d38u;
}
