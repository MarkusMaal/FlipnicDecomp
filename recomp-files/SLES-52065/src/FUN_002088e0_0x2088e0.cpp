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

// Function: FUN_002088e0
// Address: 0x2088e0 - 0x2089ec
void FUN_002088e0_0x2088e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002088e0_0x2088e0");
#endif

    ctx->pc = 0x2088e0u;

    // 0x2088e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2088e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2088e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2088e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2088e8: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x2088e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2088ec: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2088ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2088f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2088F0u;
    {
        const bool branch_taken_0x2088f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2088F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088F0u;
        // 0x2088f4: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088f0) {
            ctx->pc = 0x208908u;
            goto label_208908;
        }
    }
    ctx->pc = 0x2088F8u;
    // 0x2088f8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2088f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2088fc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2088fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x208900: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x208900u;
    {
        const bool branch_taken_0x208900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208900u;
        // 0x208904: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208900) {
            ctx->pc = 0x20899Cu;
            goto label_20899c;
        }
    }
    ctx->pc = 0x208908u;
label_208908:
    // 0x208908: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x208908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x20890c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20890Cu;
    {
        const bool branch_taken_0x20890c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20890Cu;
        // 0x208910: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20890c) {
            ctx->pc = 0x208960u;
            goto label_208960;
        }
    }
    ctx->pc = 0x208914u;
    // 0x208914: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208914u;
    {
        const bool branch_taken_0x208914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208914) {
            ctx->pc = 0x208924u;
            goto label_208924;
        }
    }
    ctx->pc = 0x20891Cu;
    // 0x20891c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x20891Cu;
    {
        const bool branch_taken_0x20891c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20891Cu;
        // 0x208920: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20891c) {
            ctx->pc = 0x20899Cu;
            goto label_20899c;
        }
    }
    ctx->pc = 0x208924u;
label_208924:
    // 0x208924: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x208924u;
    {
        const bool branch_taken_0x208924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x208928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208924u;
        // 0x208928: 0x3c03ff80  lui         $v1, 0xFF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208924) {
            ctx->pc = 0x2089A0u;
            goto label_2089a0;
        }
    }
    ctx->pc = 0x20892Cu;
    // 0x20892c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x208930: 0x2862ff82  slti        $v0, $v1, -0x7E
    ctx->pc = 0x208930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x208934: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208934u;
    {
        const bool branch_taken_0x208934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208934u;
        // 0x208938: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208934) {
            ctx->pc = 0x208954u;
            goto label_208954;
        }
    }
    ctx->pc = 0x20893Cu;
    // 0x20893c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20893cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208940: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x208940u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x208944: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x208944u;
    {
        const bool branch_taken_0x208944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x208948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208944u;
        // 0x208948: 0x452806  srlv        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208944) {
            ctx->pc = 0x208998u;
            goto label_208998;
        }
    }
    ctx->pc = 0x20894Cu;
    // 0x20894c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20894Cu;
    {
        const bool branch_taken_0x20894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20894Cu;
        // 0x208950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20894c) {
            ctx->pc = 0x208998u;
            goto label_208998;
        }
    }
    ctx->pc = 0x208954u;
label_208954:
    // 0x208954: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x208954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x208958: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208958u;
    {
        const bool branch_taken_0x208958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208958u;
        // 0x20895c: 0x2467007f  addiu       $a3, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208958) {
            ctx->pc = 0x20896Cu;
            goto label_20896c;
        }
    }
    ctx->pc = 0x208960u;
label_208960:
    // 0x208960: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x208960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x208964: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x208964u;
    {
        const bool branch_taken_0x208964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208964u;
        // 0x208968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208964) {
            ctx->pc = 0x20899Cu;
            goto label_20899c;
        }
    }
    ctx->pc = 0x20896Cu;
label_20896c:
    // 0x20896c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20896cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x208970: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x208970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x208974: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208974u;
    {
        const bool branch_taken_0x208974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x208974) {
            ctx->pc = 0x208978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208974u;
            // 0x208978: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208988u;
            goto label_208988;
        }
    }
    ctx->pc = 0x20897Cu;
    // 0x20897c: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x20897cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x208980: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x208980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x208984: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x208984u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_208988:
    // 0x208988: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x208988u;
    {
        const bool branch_taken_0x208988 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x208988) {
            ctx->pc = 0x20898Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208988u;
            // 0x20898c: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20899Cu;
            goto label_20899c;
        }
    }
    ctx->pc = 0x208990u;
    // 0x208990: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x208990u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x208994: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x208994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_208998:
    // 0x208998: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x208998u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_20899c:
    // 0x20899c: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x20899cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
label_2089a0:
    // 0x2089a0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x2089a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x2089a4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2089a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2089a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2089a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2089ac: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2089acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2089b0: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x2089b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x2089b4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2089b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2089b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2089b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2089bc: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x2089bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2089c0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2089c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2089c4: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x2089c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x2089c8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2089c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2089cc: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x2089ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2089d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2089d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2089d4: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x2089d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x2089d8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2089d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2089dc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2089dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2089e0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2089e0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2089e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2089E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2089E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2089ECu;
}
