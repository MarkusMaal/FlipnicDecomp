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

// Function: entry_001aa484
// Address: 0x1aa484 - 0x1aa53c
void entry_001aa484_0x1aa484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa484_0x1aa484");
#endif

    switch (ctx->pc) {
        case 0x1aa524u: goto label_1aa524;
        case 0x1aa534u: goto label_1aa534;
        default: break;
    }

    ctx->pc = 0x1aa484u;

    // 0x1aa484: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1AA484u;
    {
        const bool branch_taken_0x1aa484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa484) {
            ctx->pc = 0x1AA53Cu;
            return;
        }
    }
    ctx->pc = 0x1AA48Cu;
    // 0x1aa48c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1aa48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1aa490: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1aa490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1aa494: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1aa494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aa498: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1aa498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aa49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4a0: 0x24a5e0d0  addiu       $a1, $a1, -0x1F30
    ctx->pc = 0x1aa4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959312));
    // 0x1aa4a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aa4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aa4a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1aa4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1aa4ac: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1aa4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1aa4b0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1aa4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1aa4b4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1aa4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aa4b8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1aa4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1aa4bc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1aa4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1aa4c0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1aa4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1aa4c4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1aa4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1aa4c8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1aa4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1aa4cc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1aa4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1aa4d0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1aa4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1aa4d4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1aa4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1aa4d8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1aa4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aa4dc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1aa4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1aa4e0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1aa4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1aa4e4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1aa4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1aa4e8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1aa4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1aa4ec: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1aa4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1aa4f0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1aa4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1aa4f4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1aa4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1aa4f8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1aa4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1aa4fc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1aa4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aa500: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1aa500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa504: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1aa504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa508: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1aa508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1aa50c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1aa50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1aa510: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1aa510u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1aa514: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1aa514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1aa518: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1aa518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1aa51c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1AA51Cu;
    SET_GPR_U32(ctx, 31, 0x1AA524u);
    ctx->pc = 0x1AA520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA51Cu;
    // 0x1aa520: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1AA51Cu, 0x1AA524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA524u;
label_1aa524:
    // 0x1aa524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa528: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aa528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa52c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1AA52Cu;
    SET_GPR_U32(ctx, 31, 0x1AA534u);
    ctx->pc = 0x1AA530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA52Cu;
    // 0x1aa530: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1AA52Cu, 0x1AA534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA534u;
label_1aa534:
    // 0x1aa534: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA534u;
    {
        const bool branch_taken_0x1aa534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA534u;
        // 0x1aa538: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa534) {
            ctx->pc = 0x1AA544u;
            return;
        }
    }
    ctx->pc = 0x1AA53Cu;
}
