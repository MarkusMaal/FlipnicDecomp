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

// Function: FUN_001d9710
// Address: 0x1d9710 - 0x1d9890
void FUN_001d9710_0x1d9710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d9710_0x1d9710");
#endif

    switch (ctx->pc) {
        case 0x1d9854u: goto label_1d9854;
        case 0x1d9880u: goto label_1d9880;
        default: break;
    }

    ctx->pc = 0x1d9710u;

    // 0x1d9710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9714: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x1d9714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d9718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d971c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1D971Cu;
    {
        const bool branch_taken_0x1d971c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D971Cu;
        // 0x1d9720: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d971c) {
            ctx->pc = 0x1D9880u;
            goto label_1d9880;
        }
    }
    ctx->pc = 0x1D9724u;
    // 0x1d9724: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1d9724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d9728: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1D9728u;
    {
        const bool branch_taken_0x1d9728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9728u;
        // 0x1d972c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9728) {
            ctx->pc = 0x1D9808u;
            goto label_1d9808;
        }
    }
    ctx->pc = 0x1D9730u;
    // 0x1d9730: 0x28620021  slti        $v0, $v1, 0x21
    ctx->pc = 0x1d9730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1d9734: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D9734u;
    {
        const bool branch_taken_0x1d9734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9734u;
        // 0x1d9738: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9734) {
            ctx->pc = 0x1D9788u;
            goto label_1d9788;
        }
    }
    ctx->pc = 0x1D973Cu;
    // 0x1d973c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d9740: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1D9740u;
    {
        const bool branch_taken_0x1d9740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9740u;
        // 0x1d9744: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9740) {
            ctx->pc = 0x1D9838u;
            goto label_1d9838;
        }
    }
    ctx->pc = 0x1D9748u;
    // 0x1d9748: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1d9748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d974c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D974Cu;
    {
        const bool branch_taken_0x1d974c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D974Cu;
        // 0x1d9750: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d974c) {
            ctx->pc = 0x1D9768u;
            goto label_1d9768;
        }
    }
    ctx->pc = 0x1D9754u;
    // 0x1d9754: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d9754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9758: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D9758u;
    {
        const bool branch_taken_0x1d9758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9758u;
        // 0x1d975c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9758) {
            ctx->pc = 0x1D97C8u;
            goto label_1d97c8;
        }
    }
    ctx->pc = 0x1D9760u;
    // 0x1d9760: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1D9760u;
    {
        const bool branch_taken_0x1d9760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9760u;
        // 0x1d9764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9760) {
            ctx->pc = 0x1D9888u;
            goto label_1d9888;
        }
    }
    ctx->pc = 0x1D9768u;
label_1d9768:
    // 0x1d9768: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D9768u;
    {
        const bool branch_taken_0x1d9768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9768u;
        // 0x1d976c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9768) {
            ctx->pc = 0x1D97D8u;
            goto label_1d97d8;
        }
    }
    ctx->pc = 0x1D9770u;
    // 0x1d9770: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d9770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d9774: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D9774u;
    {
        const bool branch_taken_0x1d9774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9774u;
        // 0x1d9778: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9774) {
            ctx->pc = 0x1D97F0u;
            goto label_1d97f0;
        }
    }
    ctx->pc = 0x1D977Cu;
    // 0x1d977c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1D977Cu;
    {
        const bool branch_taken_0x1d977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D977Cu;
        // 0x1d9780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d977c) {
            ctx->pc = 0x1D9888u;
            goto label_1d9888;
        }
    }
    ctx->pc = 0x1D9784u;
    // 0x1d9784: 0x0  nop
    ctx->pc = 0x1d9784u;
    // NOP
label_1d9788:
    // 0x1d9788: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D9788u;
    {
        const bool branch_taken_0x1d9788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9788u;
        // 0x1d978c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9788) {
            ctx->pc = 0x1D9828u;
            goto label_1d9828;
        }
    }
    ctx->pc = 0x1D9790u;
    // 0x1d9790: 0x28620081  slti        $v0, $v1, 0x81
    ctx->pc = 0x1d9790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1d9794: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9794u;
    {
        const bool branch_taken_0x1d9794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9794u;
        // 0x1d9798: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9794) {
            ctx->pc = 0x1D97B0u;
            goto label_1d97b0;
        }
    }
    ctx->pc = 0x1D979Cu;
    // 0x1d979c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1d979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d97a0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D97A0u;
    {
        const bool branch_taken_0x1d97a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97A0u;
        // 0x1d97a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97a0) {
            ctx->pc = 0x1D9810u;
            goto label_1d9810;
        }
    }
    ctx->pc = 0x1D97A8u;
    // 0x1d97a8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1D97A8u;
    {
        const bool branch_taken_0x1d97a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97A8u;
        // 0x1d97ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97a8) {
            ctx->pc = 0x1D9888u;
            goto label_1d9888;
        }
    }
    ctx->pc = 0x1D97B0u;
label_1d97b0:
    // 0x1d97b0: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D97B0u;
    {
        const bool branch_taken_0x1d97b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97B0u;
        // 0x1d97b4: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97b0) {
            ctx->pc = 0x1D9830u;
            goto label_1d9830;
        }
    }
    ctx->pc = 0x1D97B8u;
    // 0x1d97b8: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D97B8u;
    {
        const bool branch_taken_0x1d97b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97B8u;
        // 0x1d97bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97b8) {
            ctx->pc = 0x1D9860u;
            goto label_1d9860;
        }
    }
    ctx->pc = 0x1D97C0u;
    // 0x1d97c0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1D97C0u;
    {
        const bool branch_taken_0x1d97c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97C0u;
        // 0x1d97c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97c0) {
            ctx->pc = 0x1D9888u;
            goto label_1d9888;
        }
    }
    ctx->pc = 0x1D97C8u;
label_1d97c8:
    // 0x1d97c8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d97cc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D97CCu;
    {
        const bool branch_taken_0x1d97cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97CCu;
        // 0x1d97d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97cc) {
            ctx->pc = 0x1D9838u;
            goto label_1d9838;
        }
    }
    ctx->pc = 0x1D97D4u;
    // 0x1d97d4: 0x0  nop
    ctx->pc = 0x1d97d4u;
    // NOP
label_1d97d8:
    // 0x1d97d8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d97d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d97dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d97e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d97e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d97e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d97e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D97E8u;
    {
        const bool branch_taken_0x1d97e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97E8u;
        // 0x1d97ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97e8) {
            ctx->pc = 0x1D9840u;
            goto label_1d9840;
        }
    }
    ctx->pc = 0x1D97F0u;
label_1d97f0:
    // 0x1d97f0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d97f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d97f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d97f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d97f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d97fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D97FCu;
    {
        const bool branch_taken_0x1d97fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97FCu;
        // 0x1d9800: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97fc) {
            ctx->pc = 0x1D983Cu;
            goto label_1d983c;
        }
    }
    ctx->pc = 0x1D9804u;
    // 0x1d9804: 0x0  nop
    ctx->pc = 0x1d9804u;
    // NOP
label_1d9808:
    // 0x1d9808: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D9808u;
    {
        const bool branch_taken_0x1d9808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9808u;
        // 0x1d980c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9808) {
            ctx->pc = 0x1D9838u;
            goto label_1d9838;
        }
    }
    ctx->pc = 0x1D9810u;
label_1d9810:
    // 0x1d9810: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d9810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d9814: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1d9814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d9818: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d9818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d981c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D981Cu;
    {
        const bool branch_taken_0x1d981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D981Cu;
        // 0x1d9820: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d981c) {
            ctx->pc = 0x1D983Cu;
            goto label_1d983c;
        }
    }
    ctx->pc = 0x1D9824u;
    // 0x1d9824: 0x0  nop
    ctx->pc = 0x1d9824u;
    // NOP
label_1d9828:
    // 0x1d9828: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9828u;
    {
        const bool branch_taken_0x1d9828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9828u;
        // 0x1d982c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9828) {
            ctx->pc = 0x1D9838u;
            goto label_1d9838;
        }
    }
    ctx->pc = 0x1D9830u;
label_1d9830:
    // 0x1d9830: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d9830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d9834: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1d9834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1d9838:
    // 0x1d9838: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d9838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d983c:
    // 0x1d983c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d983cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d9840:
    // 0x1d9840: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1d9840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1d9844: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d9844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d9848: 0x8c8466d0  lw          $a0, 0x66D0($a0)
    ctx->pc = 0x1d9848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 26320)));
    // 0x1d984c: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D984Cu;
    SET_GPR_U32(ctx, 31, 0x1D9854u);
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D984Cu, 0x1D9854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9854u;
label_1d9854:
    // 0x1d9854: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D9854u;
    {
        const bool branch_taken_0x1d9854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9854u;
        // 0x1d9858: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9854) {
            ctx->pc = 0x1D9884u;
            goto label_1d9884;
        }
    }
    ctx->pc = 0x1D985Cu;
    // 0x1d985c: 0x0  nop
    ctx->pc = 0x1d985cu;
    // NOP
label_1d9860:
    // 0x1d9860: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d9860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d9864: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d9864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d9868: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d9868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d986c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1d986cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1d9870: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d9870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d9874: 0x8c8466d0  lw          $a0, 0x66D0($a0)
    ctx->pc = 0x1d9874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 26320)));
    // 0x1d9878: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D9878u;
    SET_GPR_U32(ctx, 31, 0x1D9880u);
    ctx->pc = 0x1D987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9878u;
    // 0x1d987c: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D9878u, 0x1D9880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9880u;
label_1d9880:
    // 0x1d9880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9884:
    // 0x1d9884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9888:
    // 0x1d9888: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9888u;
        // 0x1d988c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9890u;
}
