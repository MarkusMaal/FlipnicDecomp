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

// Function: FUN_001fa410
// Address: 0x1fa410 - 0x1fa548
void FUN_001fa410_0x1fa410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fa410_0x1fa410");
#endif

    switch (ctx->pc) {
        case 0x1fa490u: goto label_1fa490;
        case 0x1fa4f8u: goto label_1fa4f8;
        default: break;
    }

    ctx->pc = 0x1fa410u;

    // 0x1fa410: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1fa410u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fa414: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fa414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa418: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x1fa418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x1fa41c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x1fa41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1fa420: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA420u;
    {
        const bool branch_taken_0x1fa420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fa420) {
            ctx->pc = 0x1FA438u;
            goto label_1fa438;
        }
    }
    ctx->pc = 0x1FA428u;
    // 0x1fa428: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x1fa428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1fa42c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA42Cu;
        // 0x1fa430: 0x460c0000  add.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA434u;
    // 0x1fa434: 0x0  nop
    ctx->pc = 0x1fa434u;
    // NOP
label_1fa438:
    // 0x1fa438: 0x1ca0000e  bgtz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1FA438u;
    {
        const bool branch_taken_0x1fa438 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1FA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA438u;
        // 0x1fa43c: 0x535c3  sra         $a2, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa438) {
            ctx->pc = 0x1FA474u;
            goto label_1fa474;
        }
    }
    ctx->pc = 0x1FA440u;
    // 0x1fa440: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1fa440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1fa444: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fa444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fa448: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1fa448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1fa44c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA44Cu;
    {
        const bool branch_taken_0x1fa44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA44Cu;
        // 0x1fa450: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa44c) {
            ctx->pc = 0x1FA46Cu;
            goto label_1fa46c;
        }
    }
    ctx->pc = 0x1FA454u;
    // 0x1fa454: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA454u;
    {
        const bool branch_taken_0x1fa454 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1fa454) {
            ctx->pc = 0x1FA474u;
            goto label_1fa474;
        }
    }
    ctx->pc = 0x1FA45Cu;
    // 0x1fa45c: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x1fa45cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x1fa460: 0x0  nop
    ctx->pc = 0x1fa460u;
    // NOP
    // 0x1fa464: 0x0  nop
    ctx->pc = 0x1fa464u;
    // NOP
    // 0x1fa468: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1fa468u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
label_1fa46c:
    // 0x1fa46c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA474u;
label_1fa474:
    // 0x1fa474: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FA474u;
    {
        const bool branch_taken_0x1fa474 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA474u;
        // 0x1fa478: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa474) {
            ctx->pc = 0x1FA4C0u;
            goto label_1fa4c0;
        }
    }
    ctx->pc = 0x1FA47Cu;
    // 0x1fa47c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1fa47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1fa480: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1fa480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1fa484: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FA484u;
    {
        const bool branch_taken_0x1fa484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA484u;
        // 0x1fa488: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa484) {
            ctx->pc = 0x1FA4B4u;
            goto label_1fa4b4;
        }
    }
    ctx->pc = 0x1FA48Cu;
    // 0x1fa48c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa490:
    // 0x1fa490: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1fa490u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fa494: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1fa494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1fa498: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1fa498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1fa49c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fa49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fa4a0: 0x0  nop
    ctx->pc = 0x1fa4a0u;
    // NOP
    // 0x1fa4a4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FA4A4u;
    {
        const bool branch_taken_0x1fa4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa4a4) {
            ctx->pc = 0x1FA490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa490;
        }
    }
    ctx->pc = 0x1FA4ACu;
    // 0x1fa4ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA4ACu;
    {
        const bool branch_taken_0x1fa4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4ACu;
        // 0x1fa4b0: 0x643023  subu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4ac) {
            ctx->pc = 0x1FA4BCu;
            goto label_1fa4bc;
        }
    }
    ctx->pc = 0x1FA4B4u;
label_1fa4b4:
    // 0x1fa4b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa4b8: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1fa4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fa4bc:
    // 0x1fa4bc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1fa4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_1fa4c0:
    // 0x1fa4c0: 0x24c6ff81  addiu       $a2, $a2, -0x7F
    ctx->pc = 0x1fa4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x1fa4c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fa4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fa4c8: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x1fa4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1fa4cc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1fa4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1fa4d0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1fa4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1fa4d4: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1fa4d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1fa4d8: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x1fa4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fa4dc: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x1fa4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x1fa4e0: 0x645c0  sll         $t0, $a2, 23
    ctx->pc = 0x1fa4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x1fa4e4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1fa4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fa4e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fa4e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fa4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4f0: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1fa4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x1fa4f4: 0x0  nop
    ctx->pc = 0x1fa4f4u;
    // NOP
label_1fa4f8:
    // 0x1fa4f8: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x1fa4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1fa4fc: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1fa4fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fa500: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA500u;
    {
        const bool branch_taken_0x1fa500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa500) {
            ctx->pc = 0x1FA504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA500u;
            // 0x1fa504: 0x63042  srl         $a2, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA518u;
            goto label_1fa518;
        }
    }
    ctx->pc = 0x1FA508u;
    // 0x1fa508: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1fa508u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fa50c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1fa50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fa510: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1fa510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1fa514: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x1fa514u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_1fa518:
    // 0x1fa518: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FA518u;
    {
        const bool branch_taken_0x1fa518 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA518u;
        // 0x1fa51c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa518) {
            ctx->pc = 0x1FA4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa4f8;
        }
    }
    ctx->pc = 0x1FA520u;
    // 0x1fa520: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA520u;
    {
        const bool branch_taken_0x1fa520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA520u;
        // 0x1fa524: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa520) {
            ctx->pc = 0x1FA52Cu;
            goto label_1fa52c;
        }
    }
    ctx->pc = 0x1FA528u;
    // 0x1fa528: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fa528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1fa52c:
    // 0x1fa52c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x1fa52cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1fa530: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1fa530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1fa534: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1fa534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fa538: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x1fa538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1fa53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa540: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA548u;
}
