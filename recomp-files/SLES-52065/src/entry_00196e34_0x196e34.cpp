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

// Function: entry_00196e34
// Address: 0x196e34 - 0x196eec
void entry_00196e34_0x196e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196e34_0x196e34");
#endif

    switch (ctx->pc) {
        case 0x196ed4u: goto label_196ed4;
        case 0x196ee4u: goto label_196ee4;
        default: break;
    }

    ctx->pc = 0x196e34u;

    // 0x196e34: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x196E34u;
    {
        const bool branch_taken_0x196e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x196e34) {
            ctx->pc = 0x196EECu;
            return;
        }
    }
    ctx->pc = 0x196E3Cu;
    // 0x196e3c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x196e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x196e40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x196e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x196e44: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x196e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196e48: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x196e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x196e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e50: 0x24a5d7a0  addiu       $a1, $a1, -0x2860
    ctx->pc = 0x196e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956960));
    // 0x196e54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x196e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196e58: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x196e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x196e5c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x196e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x196e60: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x196e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x196e64: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x196e64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196e68: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x196e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x196e6c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x196e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x196e70: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x196e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x196e74: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x196e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x196e78: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x196e78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x196e7c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x196e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x196e80: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x196e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x196e84: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x196e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x196e88: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x196e88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196e8c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x196e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x196e90: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x196e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x196e94: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x196e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x196e98: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x196e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x196e9c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x196e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x196ea0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x196ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x196ea4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x196ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x196ea8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x196ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x196eac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x196eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196eb0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x196eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196eb4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x196eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196eb8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x196eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x196ebc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x196ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x196ec0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x196ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x196ec4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x196ec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x196ec8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x196ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x196ecc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x196ECCu;
    SET_GPR_U32(ctx, 31, 0x196ED4u);
    ctx->pc = 0x196ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196ECCu;
    // 0x196ed0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x196ECCu, 0x196ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196ED4u;
label_196ed4:
    // 0x196ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x196ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196edc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x196EDCu;
    SET_GPR_U32(ctx, 31, 0x196EE4u);
    ctx->pc = 0x196EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196EDCu;
    // 0x196ee0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x196EDCu, 0x196EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196EE4u;
label_196ee4:
    // 0x196ee4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x196EE4u;
    {
        const bool branch_taken_0x196ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196EE4u;
        // 0x196ee8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ee4) {
            ctx->pc = 0x196EF4u;
            return;
        }
    }
    ctx->pc = 0x196EECu;
}
