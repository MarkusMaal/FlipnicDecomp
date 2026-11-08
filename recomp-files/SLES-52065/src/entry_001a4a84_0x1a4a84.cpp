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

// Function: entry_001a4a84
// Address: 0x1a4a84 - 0x1a4b3c
void entry_001a4a84_0x1a4a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4a84_0x1a4a84");
#endif

    switch (ctx->pc) {
        case 0x1a4b24u: goto label_1a4b24;
        case 0x1a4b34u: goto label_1a4b34;
        default: break;
    }

    ctx->pc = 0x1a4a84u;

    // 0x1a4a84: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A4A84u;
    {
        const bool branch_taken_0x1a4a84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a84) {
            ctx->pc = 0x1A4B3Cu;
            return;
        }
    }
    ctx->pc = 0x1A4A8Cu;
    // 0x1a4a8c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4a90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a4a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a4a94: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a4a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a4a98: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a4a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4aa0: 0x24a5dec0  addiu       $a1, $a1, -0x2140
    ctx->pc = 0x1a4aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958784));
    // 0x1a4aa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a4aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4aa8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a4aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a4aac: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a4aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a4ab0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4ab4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a4ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4ab8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a4ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a4abc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a4abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a4ac0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a4ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a4ac4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a4ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a4ac8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a4ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a4acc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a4accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a4ad0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a4ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a4ad4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4ad8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a4ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4adc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a4adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a4ae0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a4ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a4ae4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a4ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a4ae8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a4ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a4aec: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a4aecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a4af0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a4af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a4af4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a4af4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a4af8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4afc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a4afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4b00: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a4b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4b04: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a4b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4b08: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a4b0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a4b10: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a4b10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a4b14: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a4b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a4b18: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a4b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a4b1c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A4B1Cu;
    SET_GPR_U32(ctx, 31, 0x1A4B24u);
    ctx->pc = 0x1A4B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B1Cu;
    // 0x1a4b20: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A4B1Cu, 0x1A4B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B24u;
label_1a4b24:
    // 0x1a4b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b2c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A4B2Cu;
    SET_GPR_U32(ctx, 31, 0x1A4B34u);
    ctx->pc = 0x1A4B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B2Cu;
    // 0x1a4b30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A4B2Cu, 0x1A4B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B34u;
label_1a4b34:
    // 0x1a4b34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4B34u;
    {
        const bool branch_taken_0x1a4b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B34u;
        // 0x1a4b38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b34) {
            ctx->pc = 0x1A4B44u;
            return;
        }
    }
    ctx->pc = 0x1A4B3Cu;
}
